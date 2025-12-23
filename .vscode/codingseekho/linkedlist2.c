#include <stdio.h>
#include <stdlib.h>

// Define structure of a node
struct Node {
    int data;
    struct Node* next;
};

// Function to create linked list with n nodes
struct Node* createList(int n) {
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;
    int data, i;

    if (n <= 0) return NULL;

    // Create head node
    printf("Enter data for node 1: ");
    scanf("%d", &data);

    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = data;
    head->next = NULL;
    temp = head;

    // Create remaining n-1 nodes
    for (i = 2; i <= n; i++) {
        printf("Enter data for node %d: ", i);
        scanf("%d", &data);

        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = NULL;

        temp->next = newNode;  // link new node
        temp = newNode;        // move temp
    }

    return head;
}

// Function to display linked list
void displayList(struct Node* head) {
    struct Node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    int n;
    struct Node* head = NULL;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    head = createList(n);   // create linked list
    displayList(head);      // display linked list

    return 0;
}