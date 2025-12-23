// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {

//     int data;
//     struct node *next;
// };

// int main()
// {

//     struct node *head = 0;
//     struct node *temp = 0;
//     int val, size, i;

//     printf("Enter size of linked list:");
//     scanf("%d",&size);

//         if (size <= 0) {
//         printf("List size must be > 0\n");
//         return 0;
//     }
    
//      // first node
//     head = (struct node*)malloc(sizeof(struct node));
//     printf("Enter 1st value: ");
//     scanf("%d", &val);
//     head->data = val;
//     head->next = 0;

//     temp = head;

//     //for remaining node
//     for (i = 1; i < size; i++)
//     {
//         struct node *newnode = 0;
//         newnode = (struct node *)malloc(sizeof(struct node));
//         printf("enter %d value:", i + 1);
//         scanf("%d", &val);
//         newnode->data = val;
//         newnode->next = 0;

//         temp->next = newnode;
//         temp = newnode;
//     }

//     temp = head;
//     printf("Linked list is: ");
//     while (temp != 0)
//     {
//         printf("%d ", temp->data);
//         temp = temp->next;
//     }
// }








// #include <stdio.h>
// #include <stdlib.h> // Required for malloc

// // Define the structure for a node in the linked list
// struct Node {
//     int data;
//     struct Node* next;
// };

// int main() {
//     struct Node* head = NULL; // Initialize head of the list to NULL
//     struct Node* newNode;
//     struct Node* temp;
//     int numNodes, i, data;

//     printf("Enter the number of nodes to create: ");
//     scanf("%d", &numNodes);

//     // Linked List Creation
//     for (i = 0; i < numNodes; i++) {
//         newNode = (struct Node*)malloc(sizeof(struct Node)); // Allocate memory for a new node
//         if (newNode == NULL) {
//             printf("Memory allocation failed!\n");
//             return 1; // Exit with an error code
//         }

//         printf("Enter data for node %d: ", i + 1);
//         scanf("%d", &data);

//         newNode->data = data;
//         newNode->next = NULL; // New node initially points to NULL

//         if (head == NULL) { // If the list is empty, the new node becomes the head
//             head = newNode;
//         } else { // Otherwise, add the new node to the end of the list
//             temp = head;
//             while (temp->next != NULL) {
//                 temp = temp->next;
//             }
//             temp->next = newNode;
//         }
//     }

//     // Linked List Display
//     printf("\nLinked List elements: ");
//     if (head == NULL) {
//         printf("List is empty.\n");
//     } else {
//         temp = head;
//         while (temp != NULL) {
//             printf("%d ", temp->data);
//             temp = temp->next;
//         }
//         printf("\n");
//     }

//     // Free allocated memory (important to prevent memory leaks)
//     temp = head;
//     while (temp != NULL) {
//         struct Node* nextNode = temp->next;
//         free(temp);
//         temp = nextNode;
//     }
//     head = NULL; // Set head to NULL after freeing all nodes

//     return 0;
// }