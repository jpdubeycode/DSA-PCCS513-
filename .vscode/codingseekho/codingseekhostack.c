#include <stdio.h>
#include <stdlib.h>

struct stack
{

    int top;
    int cap;
    int *arr;
};

int isEmpty(struct stack *st){

if(st->top==-1)
{return 1;}
else
{return 0;}


}

int isFull(struct stack *st){

    if(st->top==st->cap-1)
    {
        return 1;
    }
else 
return 0;

}


void push(struct stack *st){

if(!isFull(st)){
st->top++;
printf("Enter a data:");
scanf("%d",&st->arr[st->top]);


}


else{
    printf("Stack is full");

}
}

void pop(struct stack *st)
{


int d;
if(!isEmpty(st)){

d=st->arr[st->top];
st->top--;
printf("Popped element is %d",d);
}

else{

printf("Stack is empty!");

}

}

void printStack(struct stack *st) {
    if (isEmpty(st)) {
        printf("Stack is empty!\n");
        return;
    }

    printf("Stack elements (top to bottom): ");
    for (int i = st->top; i >= 0; i--) {
        printf("%d ", st->arr[i]);
    }
    printf("\n");
}


int main()
{

    int ch, size;
    struct stack *st;

    printf("Enter size of of stack:");
    scanf("%d", &size);
    st = (struct stack *)malloc(sizeof(struct stack));
    st->top = -1;
    st->cap = size;
    st->arr = (int *)calloc(st->cap, sizeof(int));

printf("\n 1. Push\n 2. Pop\n 3. Print\n 4. Exit\n");
    while (1)
    {
        printf("Enetr your choice:\n");
        scanf("%d", &ch);

        switch (ch)
        {

        case 1:
        {

            push(st);
            break;
        }

        case 2:
        {
            pop(st);
            break;
        }


         case 3:
            printStack(st);
            break;
        case 4:
            free(st->arr);
            free(st);
            exit(0);
        

            default:
            {

                printf("Enter wrong input!");
            }
        }
    }
}