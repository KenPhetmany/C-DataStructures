
/*

Queue Structure Example

*/

#include <stdio.h>
#define SIZE 5
void enQueue(int);
void deQueue();
void display();
int items[SIZE], front = -1, rear = -1;

int main()

{
    deQueue();
    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);
    enQueue(6);
    display();
    deQueue();
    display();
    return 0;
}

void enQueue(int value)
{
    if (rear == SIZE - 1)
    {
        printf("Queue is Full! \n");
    }
    else
    {
        if (front == -1)
            front = 0;
        rear++;
        items[rear] = value;
        printf("Inserted -> %d \n", value);
    }
}

void deQueue()
{
    if (front == -1)
        printf("nQueue is Empty!!");
    else
    {
        printf("Deleted : %d \n", items[front]);
        front++;
        if (front > rear)
            front = rear = -1;
    }
}

void display()
{
    if (rear == -1)
    {
        printf("Queue, is Empty \n");
    }
    else
    {
        int i;
        printf("Queue elements are: \n");
        for (int i = front; i <= rear; i++)
            printf(" %d \n", items[i]);
    }
}
