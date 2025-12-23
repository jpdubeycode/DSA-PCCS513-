/*

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;

};
struct node* createlist(int n){
    int data;
    struct node* temp=NULL,*head=0,*newnode=0;
  
    if(n<=0){
        return 0;
    }
    //create head node
    head=(struct node*)malloc(sizeof(struct node));
    if(head==NULL){
        printf("memory allocation failed!\n");
       return 0;
    }
    
    printf("Enter data of 1 node:");
    scanf("%d",&data);
    head->data=data;
    head->next=NULL;


    temp=head;
//create remaining node

    for(int i=2;i<=n;i++){
        printf("Enter data of %d node:",i);
        scanf("%d",&data);
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=data;
        newnode->next=NULL;
        temp->next=newnode;
        temp=temp->next;
   
    }
    return head;
}

//function to display linked list

void display(struct node* head){
    struct node* temp;
    temp=head;
    printf("Linked list:");
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
    
}

struct node* dltbeginning(struct node* head){

    if(head==NULL){
        printf("List is empty");
        return head;
    }

    struct node* temp;
    temp=head;


head=head->next;
printf("Deleted noode:%d\n",temp->data);
free(temp);
return head;

}


struct node* dltspecificpos(struct node* head,int pos){

if(head==NULL){
    printf("List is empty");
        return head;
}
if(pos<=0){
    printf("invalid postion\n");
    return head;
}
if(pos==1)
{
    dltbeginning(head);
}
struct node* temp=head,*prev=NULL;
int i=1;
while(temp!=NULL && i<pos){
    prev=temp;
    temp=temp->next;
    i++;
}
if(temp==NULL){
    printf("Position out of range.\n");
    return head;
}
prev->next=temp->next;
printf("deleted node are:%d\n",temp->data);
free(temp);
return(head);

}



int main(){

int data,n;
struct node *head=NULL;
printf("Enter number of node:");
scanf("%d",&n);

head=createlist(n);
display(head);
head=dltbeginning(head);
display(head);
int pos;
printf("ENter postion that u want dlt:");
scanf("%d",&pos);
head=dltspecificpos(head,pos);
display(head);

return 0;

}

*/


#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;

};
//create node
struct node* createnode(int data){
    struct node* head=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=data;
    head->next=NULL;
     return head;
}
//printing linkedlist

void printlist(struct node* head){
    struct node* temp=NULL;
    temp=head;

    printf("Linked List:");
    while(temp!=NULL){
       printf("%d->",temp->data);
       temp=temp->next;

    }
    printf("NULL\n");

}

// / Function to merge two sorted linked lists
// struct Node* mergeLists(struct Node* l1, struct Node* l2) {
//     // Create a dummy node to simplify edge cases
//     struct Node dummy;
//     struct Node* tail = &dummy;
//     dummy.next = NULL;

//     while (l1 != NULL && l2 != NULL) {
//         if (l1->data <= l2->data) {
//             tail->next = l1;
//             l1 = l1->next;
//         } else {
//             tail->next = l2;
//             l2 = l2->next;
//         }
//         tail = tail->next;
//     }

//     // Append the remaining nodes
//     if (l1 != NULL) {
//         tail->next = l1;
//     } else {
//         tail->next = l2;
//     }

//     return dummy.next;  // merged list head
// } 



 // concatenate two lists and return head of resulting list
struct node* concatenate(struct node* l1, struct node* l2) {
    if (l1 == NULL) return l2;     // if first list empty, return second
    struct node* temp = l1;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = l2;
    return l1;
}

int main(){
//creating first linked list
struct node* l1=NULL;
l1=createnode(1);
l1->next=createnode(3);
l1->next->next=createnode(7);

//creating second linked list


struct node* l2=NULL;
l2=createnode(2);
l2->next=createnode(4);
l2->next->next=createnode(6);

printlist(l1);
printlist(l2);

struct node* merged=concatenate(l1,l2);
printf("concatanate link:");
printlist(merged);

//struct node* merged=merge(l1,l2);
//printf("merged link:");
//printlist(merged);

}

/*


#include<stdio.h>
#include<stdlib.h>
#define MAX 50

void insert();
void dlt();
void display();

int queue_array[MAX];
int rear=-1;
int front=-1;

int main(){
    int choice;
    while(1){
        printf("Press\n1.Insert element \n2.delete element \n3. Display all element of queue \n4. quit \n");
        printf("Enter your chioce:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            insert();
            break;
            case 2:
            dlt();
             break;
            case 3:
            display();
             break;
            case 4:
            exit(1);
            default:
            printf("wrong input\n");


        }

    }
}

void insert(){
    int add_item;
    if(rear==MAX-1){
        printf("Queue overflow");

    }
    else{
        if(front==-1)
        front=0;
        printf("Insert the element in queue:");
        scanf("%d",&add_item);
        rear=rear+1;
        queue_array[rear]=add_item;
    }
}

void dlt(){
    if(front==-1 || front>rear){
        printf("Queue underflow \n");
        return;
    }
    else{
        printf("Element deleted from queue is %d \n",queue_array[front]);
        front=front+1;
    }
}
void display(){
    int i;
    if(front==-1){
    printf("Queue is empty \n");

}
else {
    printf("Queue is: \n");
    for(i=front ; i<=rear;i++){
        printf("%d",queue_array[i]);
        printf("\n");
    }
}
}
*/
//binary search
 #include <stdio.h>
 int main() {
 // Array MUST be sorted for Binary Search
 int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
 int n = 10;
 int target = 23;
 int low = 0, high = n- 1, mid;
 int found = 0;
 while (low <= high) {
 mid = (low + high) / 2;
 if (arr[mid] == target) {
 printf("Element found at index %d\n", mid);
 found = 1;
 break;
 }
 if (arr[mid] < target)
 low = mid + 1; // Ignore left half
 else
 high = mid- 1; // Ignore right half
 }
 if (!found) printf("Element not found\n");
 return 0;
 }













 
  #include <stdio.h>
 void swap(int* a, int* b) {
 int t = *a; *a = *b; *b = t;
 }
 // This function puts pivot at correct position
 int partition(int arr[], int low, int high) {
 int pivot = arr[high];
 int i = (low- 1); // Index of smaller element
 for (int j = low; j <= high- 1; j++) {
 // If current element is smaller than pivot
 if (arr[j] < pivot) {
 i++;
 swap(&arr[i], &arr[j]);
 }
 }
 swap(&arr[i + 1], &arr[high]);
 return (i + 1);
 }
 void quickSort(int arr[], int low, int high) {
 if (low < high) {
 // pi is partitioning index
 int pi = partition(arr, low, high);
 quickSort(arr, low, pi- 1); // Sort Left
 quickSort(arr, pi + 1, high); // Sort Right
 }
 }
 int main() {
 int arr[] = {10, 7, 8, 9, 1, 5};
 int n = 6;
 quickSort(arr, 0, n- 1);
 printf("Sorted array: ");
 for (int i = 0; i < n; i++) printf("%d ", arr[i]);
 return 0;
 }