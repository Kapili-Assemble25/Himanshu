#include <stdio.h>
#include <stdlib.h>
// Define a structure
struct node {
	int data;
	struct node* next;
	};
typedef struct node Node;
// Function to insert a new node at a specified position in the linked list
void insertAtPos(Node ** head, int data, int pos);
// Print the linked list and free allocated memory
void printList(Node *head);

void deleteNode(Node **head, int data){
	if (*head == NULL) return;

    Node *temp = *head;

    // If head needs to be deleted
    if (temp->data == data) {
        *head = temp->next;
        free(temp);
        return;
    }

    Node *prev = NULL;

    // Find the node to delete
    while (temp != NULL && temp->data != data) {
        prev = temp;
        temp = temp->next;
    }

    // If not found
    if (temp == NULL) {
        printf("Value %d not found in list.\n", data);
        return;
    }

    // Unlink and free
    prev->next = temp->next;
    free(temp);
}

// Main function
int main() {
// Initialize an empty linked list
	Node* head = NULL;
// Insert elements at different positions in the linked list
	insertAtPos(&head, 3, 0); // Insert at the beginning
	insertAtPos(&head, 7, 1); // Insert at position 1
	insertAtPos(&head, 5, 1); // Insert at position 1
// Print the linked list
	printf("Linked List: ");
	printList(head);
	deleteNode(&head,5);
	printList(head);
// Free the allocated memory for the linked list nodes
	while (head != NULL) {
		Node* temp = head;
		head = head->next;
		free(temp);
	}
	return 0;
	}
void insertAtPos(Node** head, int data, int pos) {
	Node* newNode = (Node *)malloc(sizeof(Node)); // Allocate memory
	newNode->data = data;
	newNode->next = NULL;
// If the specified position is 0, insert at the beginning
	if (pos == 0) {
		newNode->next = *head;
		*head = newNode;
	return;
	}
// Traverse the list to find the node at the specified position - 1
	Node* current = *head;
	int currentPosition = 0;
	while (currentPosition!=pos-1 && current !=NULL) {
		current = current->next;
		currentPosition++;
	}
// Insert the new node at the specified position
	if (current != NULL) {
		newNode->next=current->next;// Point newNode next to current next
		current->next=newNode ; // Point current next to newNode next
		} 
	else {
		printf("Invalid position. Node can't be inserted at position %d\n", pos);
		free(newNode);
		}
	}
// Function to print the elements of the linked list
void printList(Node* head) {
	Node* current = head;
	while (current != NULL) {
		printf("%d ",current->data);  // print current data
		current=current->next; // point current to current next
	}
	printf("NULL\n");
	}
