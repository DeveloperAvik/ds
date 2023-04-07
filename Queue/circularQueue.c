#include <stdio.h>
#include <stdlib.h>
int rear = -1, font = -1;
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
            exit(1);
            printf("\n---------------------------\n");
        }
    }

    return (0);
}
void push()
{
    int a;
    if (rear + 1 == size && font != -1)
        rear = -1;
    if (font == -1 && rear + 1 == size)
    {
        printf("Queue full");
    }
    else if (rear == font - 1)
    {
        printf("Can not inserted");
    }
    else
    {
        printf("Enter val for push=");
        scanf("%d", &a);
        arr[++rear] = a;
    }
    printf("\nrear=%d font=%d", rear, font);
}
void pop()
{
    if ((rear == -1 && font == -1) || (rear == font))
        printf("empty queue");
    else
    {
        if (font + 1 == size)
        {
            font = -1;
        }
        font++;
    }
    printf("\nrear=%d font=%d", rear, font);
}
void display()
{
    if ((rear == -1 && font == -1) || (rear == font))
        printf("emptyqueue");
    else
    {
        int i;
        if (font + 1 == size)
        {
            i = 0;
        }
        else
        {
            i = font + 1;
        }

        while (i != rear + 1)
        {
            printf("%d ", arr[i]);
            if (i + 1 == size && rear + 1 != size)
            {

                i = 0;
            }
            else
            {
                i++;
            }
        }
    }
    printf("\nrear=%d font=%d", rear, font);
}