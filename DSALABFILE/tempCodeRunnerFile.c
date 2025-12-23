#include<stdio.h>
// #include<stdlib.h>

// struct node{
//     int data;
//     struct node* next;

// };
// //create node
// struct node* createnode(int data){
//     struct node* head=NULL;
//     head=(struct node*)malloc(sizeof(struct node));
//     head->data=data;
//     head->next=NULL;
//      return head;
// }
// //printing linkedlist

// void printlist(struct node* head){
//     struct node* temp=NULL;
//     temp=head;

//     printf("Linked List:");
//     while(temp!=NULL){
//        printf("%d->",temp->data);
//        temp=temp->next;

//     }
//     printf("NULL\n");

// }

// // / Function to merge two sorted linked lists
// // struct Node* mergeLists(struct Node* l1, struct Node* l2) {
// //     // Create a dummy node to simplify edge cases
// //     struct Node dummy;
// //     struct Node* tail = &dummy;
// //     dummy.next = NULL;

// //     while (l1 != NULL && l2 != NULL) {
// //         if (l1->data <= l2->data) {
// //             tail->next = l1;
// //             l1 = l1->next;
// //         } else {
// //             tail->next = l2;
// //             l2 = l2->next;
// //         }
// //         tail = tail->next;
// //     }

// //     // Append the remaining nodes
// //     if (l1 != NULL) {
// //         tail->next = l1;
// //     } else {
// //         tail->next = l2;
// //     }

// //     return dummy.next;  // merged list head
// // } 



//  // concatenate two lists and return head of resulting list
// struct node* concatenate(struct node* l1, struct node* l2) {
//     if (l1 == NULL) return l2;     // if first list empty, return second
//     struct node* temp = l1;
//     while (temp->next != NULL) {
//         temp = temp->next;
//     }
//     temp->next = l2;
//     return l1;
// }

// int main(){
// //creating first linked list
// struct node* l1=NULL;
// l1=createnode(1);
// l1->next=createnode(3);
// l1->next->next=createnode(5);

// //creating second linked list


// struct node* l2=NULL;
// l2=createnode(2);
// l2->next=createnode(4);
// l2->next->next=createnode(6);
// printf("list 1:");
// printlist(l1);
// printf("list 2:");
// printlist(l2);

// struct node* merged=concatenate(l1,l2);
// printf(" after concatanate :");
// printlist(merged);

// //struct node* merged=merge(l1,l2);
// //printf("merged link:");
// //printlist(merged);

// }


