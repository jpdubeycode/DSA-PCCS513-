// // #include <stdio.h>
// // #include <stdlib.h>

// // struct node
// // {
// //     int data;
// //     struct node *next;
// // };

// // struct node *createnode(int num)
// // {
// //     int val;
// //     struct node *head = 0, *temp, *newnode = 0;

// //     head = (struct node *)malloc(sizeof(struct node));
// //     printf("Enter the value of data in head:");
// //     scanf("%d", &val);
// //     head->data = val;
// //     head->next = 0;
// //     temp = head;

// //     for (int i = 1; i < num; i++)
// //     {

// //         printf("Enter the value of %d node:", i + 1);
// //         scanf("%d", &val);
// //         newnode = (struct node *)malloc(sizeof(struct node));
// //         newnode->data = val;
// //         newnode->next = 0;
// //         temp->next = newnode;
// //         temp = newnode;
// //     }

// //     return head;
// // }

// // // display

// // void display(struct node *head)
// // {
// //     struct node *temp = head;

// //     printf("linked list are:");

// //     while (temp != 0)
// //     {

// //         printf("%d -> ", temp->data);
// //         temp = temp->next;
// //     }
// // }

// // // Insert at beginning

// // struct node *inserts(struct node *head, int data)
// // {
// //     struct node *temp = (struct node *)malloc(sizeof(struct node));

// //     if (head == 0)
// //         printf("empty");

// //     temp->data = data;
// //     temp->next = head;

// //     return temp;
// // }

// // //insert at end;

// // struct node *insertE(struct node *head, int data){

// // struct node *newnode=(struct node*)malloc(sizeof(struct node));
// // struct node *temp;
// // newnode->data=data;
// // newnode->next=0;
// // temp=head;
// // while(temp->next!=0){

// // temp=temp->next;


// // }

// // temp->next=newnode;
// // return  head;                              





// // }



// // int main()
// // {

// //     int num;

// //     struct node *head = 0;

// //     printf("Enter number of node:");
// //     scanf("%d", &num);

// //     head = createnode(num);
// //     display(head);

// //     int data;
// //     printf("\nenter the value of data that you want u insert in beginnig:");
// //     scanf("%d", &data);
// //     head = inserts(head, data);
// //     display(head);
// //      printf("\nEnter the value of data that you want u insert in end:");
// //     scanf("%d", &data);
// //     head = insertE(head, data);
// //     display(head);
// // }


#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

// Create linked list
struct node *createList(int n) {
    int val;
    struct node *head = NULL, *temp = NULL, *newnode = NULL;

    if (n <= 0) return NULL;

    printf("Enter value for node 1: ");
    scanf("%d", &val);

    head = (struct node*)malloc(sizeof(struct node));
    head->data = val;
    head->next = NULL;
    temp = head;

    for (int i = 2; i <= n; i++) {
        printf("Enter value for node %d: ", i);
        scanf("%d", &val);

        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = val;
        newnode->next = NULL;

        temp->next = newnode;
        temp = newnode;
    }
    return head;
}

// Display
void display(struct node *head) {
    struct node *temp = head;
    printf("Linked list: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Insert at beginning
struct node *insertAtBeginning(struct node *head, int data) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = head;
}

// Insert at end
struct node *insertAtEnd(struct node *head, int data) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;

    if (head == NULL) return newnode;

    struct node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newnode;
    return head;
}

// Insert at specific position
struct node *insertAtPosition(struct node *head, int data, int pos) {
    if (pos <= 1 || head == NULL) {
        return insertAtBeginning(head, data);
    }

    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;

    struct node *temp = head;
    for (int i = 1; temp != NULL && i < pos - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of range. Inserting at end.\n");
        return insertAtEnd(head, data);
    }

    newnode->next = temp->next;
    temp->next = newnode;
    return head;
}

// Delete from beginning
struct node *deleteBeginning(struct node *head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return head;
    }
    struct node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

// Delete from end
struct node *deleteEnd(struct node *head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return head;
    }
    if (head->next == NULL) {
        free(head);
        return NULL;
    }

    struct node *temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
    return head;
}

// Delete from specific position
struct node *deleteAtPosition(struct node *head, int pos) {
    if (head == NULL) {
        printf("List is empty.\n");
        return NULL;
    }
    if (pos <= 1) {
        return deleteBeginning(head);
    }

    struct node *temp = head;
    for (int i = 1; temp != NULL && i < pos - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        printf("Position out of range.\n");
        return head;
    }

    struct node *del = temp->next;
    temp->next = del->next;
    free(del);
    return head;
}

// ================= MAIN =================
int main() {
    int n, choice, data, pos;
    struct node *head = NULL;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    head = createList(n);
    display(head);

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert at position\n");
        printf("4. Delete from beginning\n");
        printf("5. Delete from end\n");
        printf("6. Delete from position\n");
        printf("7. Display list\n");
        printf("8. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &data);
                head = insertAtBeginning(head, data);
                display(head);
                break;
            case 2:
                printf("Enter value: ");
                scanf("%d", &data);
                head = insertAtEnd(head, data);
                display(head);
                break;
            case 3:
                printf("Enter value: ");
                scanf("%d", &data);
                printf("Enter position: ");
                scanf("%d", &pos);
                head = insertAtPosition(head, data, pos);
                display(head);
                break;
            case 4:
                head = deleteBeginning(head);
                display(head);
                break;
            case 5:
                head = deleteEnd(head);
                display(head);
                break;
            case 6:
                printf("Enter position: ");
                scanf("%d", &pos);
                head = deleteAtPosition(head, pos);
                display(head);
                break;
            case 7:
                display(head);
                break;
            case 8:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
