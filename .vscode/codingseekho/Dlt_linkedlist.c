#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to create linked list
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

// Delete node from beginning
struct Node* deleteAtBeginning(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return head;
    }
    struct Node* temp = head;
    head = head->next;
    printf("Deleted node: %d\n", temp->data);
    free(temp);
    return head;
}

// Delete node from end
struct Node* deleteAtEnd(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return head;
    }
    if (head->next == NULL) {
        printf("Deleted node: %d\n", head->data);
        free(head);
        return NULL;
    }
    struct Node* temp = head;
    struct Node* prev = NULL;
    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }
    printf("Deleted node: %d\n", temp->data);
    prev->next = NULL;
    free(temp);
    return head;
}

// Delete node at specific position (1-based index)
struct Node* deleteAtPosition(struct Node* head, int pos) {
    if (head == NULL) {
        printf("List is empty.\n");
        return head;
    }
    if (pos <= 0) {
        printf("Invalid position.\n");
        return head;
    }
    if (pos == 1) return deleteAtBeginning(head);

    struct Node* temp = head;
    struct Node* prev = NULL;
    int i = 1;
    while (temp != NULL && i < pos) {
        prev = temp;
        temp = temp->next;
        i++;
    }
    if (temp == NULL) {
        printf("Position out of range.\n");
        return head;
    }
    prev->next = temp->next;
    printf("Deleted node: %d\n", temp->data);
    free(temp);
    return head;
}

int main() {
    int n, choice, pos;
    struct Node* head = NULL;

    printf("Enter number of nodes: ");
    scanf("%d", &n);
    head = createList(n);
    displayList(head);

    while (1) {
        printf("\nMenu:\n");
        printf("1. Delete at Beginning\n");
        printf("2. Delete at Specific Position\n");
        printf("3. Delete at End\n");
        printf("4. Display List\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                head = deleteAtBeginning(head);
                break;
            case 2:
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                head = deleteAtPosition(head, pos);
                break;
            case 3:
                head = deleteAtEnd(head);
                break;
            case 4:
                displayList(head);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}