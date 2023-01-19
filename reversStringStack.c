#include<stdio.h>
#include<conio.h>
#include<string.h>

char stk[10];
int top=-1;

void push(char ch){
top++;
stk[top]=ch;
}
char pop(){
    char ch;
    ch=stk[top];
    top--;
    return ch;
}
int main(){
    char a[10],b[10];
    int i;
    printf("Enter String");
    scanf("%s",a);
    for(i=0;i<strlen(a);i++){
    push(a[i]);
    }
    for(i=0;i<strlen(a);i++){
        b[i]=pop();
    }
            b[i]='\0';

            printf("Reverse string = %s",b);
return 0;
}