#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node* next;

};

//function to create newnode

struct node* createnode(int value){
    struct node* node=(struct node*)malloc(sizeof(struct node));
    node->data=value;
    node->next=NULL;

return node;
}

int hascycle(struct node* head){

struct node* slow=head,*fast=head;
while(fast!=NULL&& fast->next!=NULL){
slow=slow->next;
fast=fast->next->next;
if(slow==fast){
    return 1;
}


}
 return 0;
}


int main(){

struct node* head=createnode(2);
head->next=createnode(4);
head->next->next=createnode(5);
head->next->next->next=createnode(6);
head->next->next->next->next=createnode(7);

//create cycle of node
head->next->next->next->next=head->next;

if(hascycle(head)){
    printf("cycle has found");
}
else 
printf("cycle has not found");

}