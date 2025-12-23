#include<stdio.h>
#include<stdlib.h>

struct node{

    int data;
    struct node *next;


};

int main(){

struct node *head=NULL;
struct node *temp;
struct node *newnode;

int numnode,value;
printf("Enter a number of node:");
scanf("%d",&numnode);

for(int i=0; i<numnode;i++){
newnode=(struct node*)malloc(sizeof(struct node));

if(newnode==NULL){
    printf("insertion failed");
    return 0;
}

printf("Enter a data of node %d:: ",i+1);
scanf("%d",&value);
newnode->data=value;
newnode->next=NULL;
if(head==0){
    head=newnode;

}
else{
temp=head;
while(temp->next!=0){

temp=temp->next;

}
temp->next=newnode;


}
}

//print
printf("Linked list are:");
temp=head;
while(temp!=0){

    printf("%d->",temp->data);

temp=temp->next;


}

printf("NULL\n");

head=temp;
free(temp);


}