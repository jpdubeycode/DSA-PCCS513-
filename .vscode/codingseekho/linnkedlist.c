#include <stdio.h>
#include <stdlib.h>

struct node
{

    int data;
    struct node *next;
};

struct node *createnode(int n)
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    int value;
    printf("Enter data of 1 node ");
    scanf("%d", &value);
    head->data = value;

    struct node *temp = head;
    for (int i = 1; i < n; i++)
    {

        printf("Enter data of %d node ", i + 1);
        scanf("%d", &value);
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = value;
        newnode->next=NULL;
        temp->next = newnode;
        temp = newnode;
    }
   
    return head ;
}

    // print

    void print(struct node *head)
    {
       

        struct node *temp = NULL;
        temp = head;
        printf("Linked List\n");
        while (temp != NULL)
        {

            printf("%d-> ", temp->data);

            temp = temp->next;
        }
        printf("NULL");

        free(temp);
    }


int main()
{

    int n;
    printf("Enter size of Linked List ");
    scanf("%d", &n);
    struct node *head = createnode(n);
    print(head);



}

/*
int main(){


struct node* head=NULL;
head=(struct node*)malloc(sizeof(struct node));

head->data=7;
head->next=NULL;

struct node* newnode=(struct node*)malloc(sizeof(struct node));

newnode->data=8;
newnode->next=NULL;

struct node* newnode2=(struct node*)malloc(sizeof(struct node));

newnode2->data=9;
newnode2->next=NULL;

head->next=newnode;
head->next->next=newnode2;

//print
struct node* temp=NULL;
temp=head;
   printf("Linked List is\n");
while(temp!=NULL){

 printf("%d-> ",temp->data);

 temp=temp->next;


}

printf("NULL");

free(temp);

}
*/