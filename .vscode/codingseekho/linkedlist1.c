#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *start = 0;


struct node *createnode()
{

    struct node *g;
    g = (struct node *)malloc(sizeof(struct node));
    printf("Enter a data:");
    scanf("%d", &g->data);
    g->next = 0;
    return g;
}

void insertS()
{
    struct node *k;
    k = createnode();
    if (start == 0)
    {
        start = k;
    }
    else
    {
        k->next = start;
        start = k;
    }
}

void insertE()
{
    struct node *x1, *p1;
    x1 = createnode();

    if (start == 0)
    {
        start = x1;
    }
    else
    {
        p1 = start;
        while (p1->next != 0)
        {
            p1 = p1->next;
        }
        p1->next = x1;
    }
}
void insertM()
{
    struct node *h1, *m1, *x1;
    int v;
    x1 = createnode();

    if (start == 0)
    {

        start = h1;
    }

    else
    {
        printf("Enter a value where you wants to store:");
        scanf("%d", &v);

        m1 = start;

        while (m1->data != v)
        {

            m1 = m1->next;
        }
            h1 = m1->next;
            m1->next = x1;
            x1->next = h1;
        
    }
}
void deleteS()
{
    struct node *j;
    if (start == 0)
    {
        printf("There is no any node to delete");
    }
    else
    {
        j = start;
        start = start->next;
        j->next = 0;
        free(j);
    }
}
void deleteE()
{
    struct node *k1, *j1;

    if (start == 0)
    {
        printf("There is no any data to delete");
    }
    else
    {

        k1 = start;
        while (k1->next->next != 0)
        {
            k1 = k1->next;
        }
        j1 = k1->next;

        k1->next = 0;
        free(j1);
    }
}
void deleteM()
{
 
    int v;
    printf("Enter the value you want to delete: ");
    scanf("%d", &v);

    if (start == NULL) {
        printf("List is empty!\n");
        return;
    }

    struct node *curr = start, *prev = NULL;

    // If head node itself contains the value (not "middle" but still handle)
    if (curr->data == v) {
        printf("Value is at head, use deleteS() instead.\n");
        return;
    }

    // Traverse until value is found
    while (curr != NULL && curr->data != v) {
        prev = curr;
        curr = curr->next;
    }

    // Value not found
    if (curr == NULL) {
        printf("Value %d not found!\n", v);
        return;
    }

    // If it's the last node → that's "end", not "middle"
    if (curr->next == NULL) {
        printf("Value is at end, use deleteE() instead.\n");
        return;
    }

    // Otherwise delete the "middle" node
    prev->next = curr->next;
    free(curr);
    printf("Value %d deleted from middle.\n", v);
}



void display()
{
    struct node *d;
    if (start == 0)
    {
        printf("There is no any code to display");
    }
    else
    {
        d = start;
        while (d != 0)
        {
            printf("%d ", d->data);
            d = d->next;
        }
    }
}

int main()
{

    int ch;

    printf("\n1. Insertion From start");
    printf("\n2. Insertion From end");
    printf("\n3. Insertion From middle");
    printf("\n4. Deletion From start");
    printf("\n5. Deletion From end");
    printf("\n6. Deletion From middle");
    printf("\n7. Display");
    printf("\n8. Exit");
    while (1)
    {

        printf("\n\nEnter your choice:");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
        {
            insertS();
            break;
        }
        case 2:
        {
            insertE();
            break;
        }
        case 3:
        {
            insertM();
            break;
        }
        case 4:
        {
            deleteS();
            break;
        }
        case 5:
        {
            deleteE();
            break;
        }
        case 6:
        {
            deleteM();
            break;
        }
        case 7:
        {
            display();
            break;
        }
        case 8:
        {
            exit(0);
            break;
        }

        default:
            break;
        }
    }

    return 0;
}