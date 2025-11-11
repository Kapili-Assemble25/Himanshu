#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
typedef struct node Node;

void insertAtPos(Node **head, int data, int pos);
void printList(Node *head);
void freeList(Node *head);

int main() {
    Node *head = NULL;

    insertAtPos(&head, 3, 0); 
    insertAtPos(&head, 7, 1); 
    insertAtPos(&head, 5, 1); 

    printList(head); 

    freeList(head);
    return 0;
}

void insertAtPos(Node **head, int data, int pos) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    
    if (pos == 0 || *head == NULL) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

  
    Node *temp = *head;
    for (int i = 0; i < pos - 1 && temp->next != NULL; i++) {
        temp = temp->next;
    }

   
    newNode->next = temp->next;
    temp->next = newNode;
}

void printList(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void freeList(Node *head) {
    Node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

