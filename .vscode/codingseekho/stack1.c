#include <stdio.h>
#include <stdlib.h>
#define SIZE 4

int top = -1, inp_array[SIZE];

void push();
void pop();
void show();

int main()
{
    int choice;
    while (1)
    {
        printf("\nPerform operations on the stack:");
        printf("\n1. Push the element");
        printf("\n2. Pop the element");
        printf("\n3. Show");
        printf("\n4. End");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);
        default:
            printf("\nInvalid choice!!");
        }
    }
}

void push()
{
    int x;
    if (top == SIZE - 1)
    {
        printf("\nOverflow!! Stack is full.");
    }
    
    else
    {
        printf("Enter the element to push: ");
        scanf("%d", &x);
        top = top + 1;
        inp_array[top] = x;
        printf("%d pushed into the stack.", x);
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nUnderflow!! Stack is empty.");
    }
    else
    {
        printf("\nPopped element: %d", inp_array[top]);
        top = top - 1;
    }
}

void show()
{
    if (top == -1)
    {
        printf("\nStack is empty!!");
    }
    else
    {
        int i;
        printf("\nStack elements are:\n");
        for (i = top; i >= 0; i--)
        {
            printf("%d\n", inp_array[i]);
        }
    }
}