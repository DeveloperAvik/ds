#include <stdio.h>
#include <stdlib.h>
int rear = -1, i;
int front = -1;
int arr[5];
int size = 5;
void push();
void pop();
void display();
int main()
{
    int n, val, a, i;
    while (1)
    {
        printf("\n\npress 1 for push\n");
        printf("press 2 for pop\n");
        printf("press 3 for display\n");
        printf("enter your choice=");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            printf("Exit");
            exit(0);
            printf("\n---------------------------\n");
        }
    }

    return (0);
}
void push()
{
    int a;
    if (rear + 1 != size)
    {
        printf("Enter val for push=");
        scanf("%d", &a);
        arr[++rear] = a;
    }

    else
        printf("push operation can not perfromed");
}
void pop()
{
    if (rear == front || rear == -1)
        printf("empty queue");
    else
        front++;
}
void display()
{
    if (rear == front || rear == -1)
        printf("empty queue");
    else
    {
        for (i = front + 1; i <= rear; i++)
        {
            printf(" %d", arr[i]);
        }
    }
}