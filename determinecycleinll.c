#include <stdio.h>
#include <stdlib.h>

// Definition of a linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to detect cycle using Floyd’s algorithm
int hasCycle(struct Node* head) {
    struct Node *slow = head, *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;           // move 1 step
        fast = fast->next->next;     // move 2 steps

        if (slow == fast) {
            return 1;  // cycle detected
        }
    }
    return 0;  // no cycle
}

// Helper function to create new node
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

int main() {
    // Create nodes
    struct Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);

    // Create a cycle: last node pointing to 2nd node
    head->next->next->next->next = head->next;

    if (hasCycle(head))
        printf("Cycle detected in linked list\n");
    else
        printf("No cycle detected\n");

    return 0;
}
