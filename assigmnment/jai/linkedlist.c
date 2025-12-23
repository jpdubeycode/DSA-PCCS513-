#include<stdio.h>
#include<stdlib.h>

struct node{

int data;
struct node *next;
};
struct node *createnode(int value)
{
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=value;
newnode->next=0;

return newnode;
}

void print(struct node* head){

struct node* temp=0;
temp=head;

printf("linked list---");

while(temp!=0){
printf("%d->",temp->data);
    temp=temp->next;
    

}
head=temp;
printf("NULL\n");
free(temp);


}
struct node*reverselist(struct node* head){
    struct node* prev=NULL;
    struct node* curr=head;
    struct node* next=NULL;

while(curr!=0){

    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;

}

return prev;
}


int main(){

struct node* head=(struct node*)malloc(sizeof(struct node));
head=createnode(5);
head->next=createnode(10);
head->next->next=createnode(25);
head->next->next->next=createnode(32);
head->next->next->next->next=createnode(14);
head->next->next->next->next->next=createnode(8);
printf("original linked list are\n");
print(head);
head=reverselist(head);
printf("after reversing linked list are\n");
print(head);
}