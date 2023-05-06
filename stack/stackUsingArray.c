// stack using array
#include <stdio.h>
#include <stdlib.h>
int top = 0, size = 5, arr[5];
void push();
void pop();
void display();
int main()
{
    int n, val;
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
            exit(1);
            printf("\n---------------------------\n");
        }
    }

    return (0);
}
void push()
{
    int a;

    if (top != size)
    {
        printf("Enter val for push=");
        scanf("%d", &a);
        arr[top++] = a;
    }

    else
        printf("the stack is full");
    // printf("top=%d",top);
}
void pop()
{
    if (top != 0)
        top--;
    else
        printf("nothing to pop");
}
void display()
{
    if (top == 0)
        printf("Empty stack");
    else
    {
        for (int i = 0; i < top; i++)
        {
            printf(" %d", arr[i]);
        }
    }
}
