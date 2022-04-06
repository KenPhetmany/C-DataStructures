/*

Stack Structure Example
- Last in first out approach.

*/
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

struct Stack
{
    /*
    Variables:
        - Top: the value of the top item.
        - Capacity: number of items to be added to the arry
        - Array: The array itself.
    */
    int top;
    unsigned capacity;
    int *array;
};

struct Stack *createStack(unsigned capacity)
{
    /* Initialize the Stack */
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int *)malloc(stack->capacity * sizeof(int));
    return stack;
};

int isFull(struct Stack *stack)
{
    return stack->top == stack->capacity - 1;
}

int isEmpty(struct Stack *stack)
{
    return stack->top == -1;
}

void push(struct Stack *stack, int item)
{
    /* Adds the item to the top of the Stack. Item is the new value of top */
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
    printf("%d pushed to stack \n", item);
}

int pop(struct Stack *stack)
{
    /* Removes the top item */
    if (isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top--];
}

int peek(struct Stack *stack)
{
    /* Returns the value of the top item */
    if (isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top];
}

int main()
{
    struct Stack *stack = createStack(100);
    push(stack, 11);
    push(stack, 12);
    push(stack, 33);
    printf("Current top: %d \n", peek(stack));
    printf("%d popped from stack", pop(stack));
    return 0;
}