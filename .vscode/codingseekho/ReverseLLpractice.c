#include<stdio.h>
#include<stdlib.h>

struct node{

int data;
struct node* next;
};

int main(){

    int num,val;
printf("Enter a number node:");
scanf("%d",&num);
struct node* head=0;
head=(struct node*)malloc(sizeof(struct node));
printf("Enter data of head:");
scanf("%d",&val);
head->data=val;
head->next=NULL;
struct node* temp=0;
temp=head;


for(int i=1;i<num;i++){
    struct node* newnode=NULL;
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter value of data %d:",i+1);
scanf("%d",&val);
newnode->data=val;
newnode->next=NULL;
temp->next=newnode;
temp=newnode;

}
temp=head;
printf("linked list are");
while(temp!=0){

    printf("%d -> ",temp->data);

temp=temp->next;


}

}