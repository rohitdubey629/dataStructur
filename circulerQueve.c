#include <stdlib.h>
#include <conio.h>

int CQ[5], front = -1, rear = -1, size = 5;
void insertCQ(int n)
{
    if (front == (rear + 1) % size)
    {
        printf("Queue full");
        return;
    }

    if (front == -1)
        front = 0;
    rear = (rear + 1) % size;
    CQ[rear] = n;
    return;
}
void deleteCQ()
{
    int n;
    if (front == -1)
    {
        printf("Queue is empty");
        return;
    }
    n = CQ[front];
    printf("%d id deleted out\n", n);
    if (front == rear)
        front = rear - 1;
    else
        front = (front + 1) % size;
}
void display()
{
    int i = rear - 1;
    do
    {
        i = (i + 1) % size;
        printf("%d", CQ[i]);
    } while (front != rear);
}
void main()
{
    int ch, n;
    do
    {
        printf("1>Insert\n");
        printf("2>Delete\n");
        printf("3>Display\n");
        printf("4>Exit\n");
        printf("Enter Choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter a Element");
            scanf("%d", &n);
            insertCQ(n);
            return;
            break;
        case 2:
            deleteCQ();
            return;
            break;
        case 3:
            displayCQ();
            return;
            break;
        case 4:
            exit(0);
        }
    } while (1);
    return;
}