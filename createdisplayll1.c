#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

void device_name_and_time()
{
    char computerName[MAX_COMPUTERNAME_LENGTH + 1];
    DWORD size = sizeof(computerName);
    if (GetComputerName(computerName, &size))
    {
        printf("\nSystem Name: %s\n", computerName);
    }
    time_t now = time(0);
    char *date_time = ctime(&now);
    if (date_time != NULL)
    {
        printf("The current date and time is: %s\n", date_time);
    }
}

	
	// Structure for stack node
	struct node {
		int info;
		struct node *ptr;
	} *top = NULL, *top1, *temp;
	
	int count = 0;
	
	// Push operation
	void push(int data) {
		if (top == NULL) {
			top = (struct node *)malloc(sizeof(struct node));
			top->ptr = NULL;
			top->info = data;
		} else {
			temp = (struct node *)malloc(sizeof(struct node));
			temp->ptr = top;
			temp->info = data;
			top = temp;
		}
		count++;
		printf("Node inserted: %d\n", data);
	}
	
	// Pop operation
	void pop() {
		top1 = top;
		
		if (top1 == NULL) {
			printf("\nStack Underflow!!\n");
			return;
		} else {
			top1 = top1->ptr;
			printf("Popped element: %d\n", top->info);
			free(top);
			top = top1;
			count--;
		}
	}
	
	// Peek operation
	void peek() {
		if (top == NULL) {
			printf("\nStack is empty!!\n");
		} else {
			printf("\nTop element: %d\n", top->info);
		}
	}
	
	// Display stack elements
	void display() {
		top1 = top;
		
		if (top1 == NULL) {
			printf("\nStack is empty!!\n");
			return;
		}
		
		printf("\nStack elements are:\n");
		while (top1 != NULL) {
			printf("%d\n", top1->info);
			top1 = top1->ptr;
		}
	}
	
	// Main function with menu
	int main() {
		int choice, value;
		
		while (1) {
			printf("\n--- Stack Menu ---\n");
			printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
			printf("Enter your choice: ");
			scanf("%d", &choice);
			
			switch (choice) {
				case 1:
				printf("Enter value to push: ");
				scanf("%d", &value);
				push(value);
				break;
				case 2:
				pop();
				break;
				case 3:
				peek();
				break;
				case 4:
				display();
				break;
				case 5:
                device_name_and_time();
				exit(0);
				default:
				printf("\nInvalid choice!!\n");
			}
		}
         
		return 0;
	}
   
  
