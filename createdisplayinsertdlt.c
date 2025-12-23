//c code for linked list creation, display/print, insertion at begining at spacific position and at the end.
#include <stdio.h>
#include <stdlib.h>

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
    if (head == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    head->data = data;
    head->next = NULL;
    temp = head;

    // Create remaining nodes
    for (i = 2; i <= n; i++) {
        printf("Enter data for node %d: ", i);
        scanf("%d", &data);

        newNode = (struct Node*)malloc(sizeof(struct Node));
        if (newNode == NULL) {
            printf("Memory allocation failed!\n");
            exit(1);
        }
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

// Insert at the beginning
struct Node* insertAtBeginning(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return head;
    }
    newNode->data = data;
    newNode->next = head;
    return newNode;  // new node becomes head
}

// Insert at the end
struct Node* insertAtEnd(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp = head;

    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return head;
    }
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        return newNode; // if list is empty
    }

    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

// Insert at specific position (1-based index)
struct Node* insertAtPosition(struct Node* head, int data, int pos) {
    if (pos <= 1) {
        return insertAtBeginning(head, data);
    }

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return head;
    }
    newNode->data = data;
    newNode->next = NULL;

    struct Node* temp = head;
    int i;
    for (i = 1; temp != NULL && i < pos - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of range. Inserting at end.\n");
        return insertAtEnd(head, data);
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

int main() {
    int n;
    struct Node* head = NULL;

    printf("Enter number of nodes: ");
    scanf("%d", &n);
    
    head = createList(n);   // create linked list
    displayList(head);      // display list

    // Insert at beginning
    int data;
    printf("\nEnter data to insert at beginning: ");
    scanf("%d", &data);
    head = insertAtBeginning(head, data);
    displayList(head);

    // Insert at specific position
    int pos;
    printf("\nEnter data to insert at specific position: ");
    scanf("%d", &data);
    printf("Enter position: ");
    scanf("%d", &pos);
    head = insertAtPosition(head, data, pos);
    displayList(head);

    // Insert at end
    printf("\nEnter data to insert at end: ");
    scanf("%d", &data);
    head = insertAtEnd(head, data);
    displayList(head);

    return 0;
}
