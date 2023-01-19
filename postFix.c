#include <string.h>
#include <stdio.h>
// #include "config.h"
// #include "smf.h"
// #include "midi.h"
#include <ctype.h>
#include <ctype.h>

char stk[20];
int top = -1;
int push(char ch)
{
    top++;
    stk[top] = ch;
}
char pop()
{
    char ch;
    ch = stk[top];
    top--;
    return ch;
}
int isOperation(char ch)
{
    if (ch == '^' || ch == '/' || ch == '*' || ch == '%' || ch == '+' || ch == '-')
        return 1;
    else
        return 0;
}
int priority(char ch)
{
    if (ch == '^')
        return 3;
    else if (ch == '/' || ch == '%' || ch == '*')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    else
        return 0;
}
int main()
{
    char infix[20], postfix[20], temp;
    int i, j;
    printf("Enter infix expression");
    scanf("%s", infix);
    strcat(infix, ")");
    push('(');
    i = 0;
    j = 0;
    while (infix[i] != '\0')
    {
        temp = infix[i];
        if (isdigit(temp) || isalpha(temp))
        {
            postfix[j] = temp;
            j++;
        }
        else if (temp == '(')
        {
            push(temp);
        }
        else if (isOperation(temp))
        {
            while (priority(stk[temp]) >= priority(stk[temp]))
            {
                postfix[j] = pop();
                j++;
            }
            push(temp);
        }
        else if (temp == ')')
        {
            while (stk[top] != '(')
            {
                postfix[j] = pop();
                j++;
            }
            pop();
        }
        i++;
    }
    postfix[j] = '\0';
    printf("postfix = %s", postfix[j]);
    return 0;
}
