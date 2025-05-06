#include <stdio.h>
#include <stdlib.h>

// Define a node in the list
struct Node {
    int data;
    struct Node* next;
};

// Function to insert at the end
void insert(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
    printf("%d inserted.\n", value);
}

// Function to delete a node by value
void delete(struct Node** head, int value) {
    struct Node *temp = *head, *prev = NULL;

    // If head needs to be deleted
    if (temp != NULL && temp->data == value) {
        *head = temp->next;
        free(temp);
        printf("%d deleted.\n", value);
        return;
    }

    // Search for the node
    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    // If value not found
    if (temp == NULL) {
        printf("%d not found.\n", value);
        return;
    }

    // Unlink and free memory
    prev->next = temp->next;
    free(temp);
    printf("%d deleted.\n", value);
}

// Function to display the list
void display(struct Node* head) {
    printf("List: ");
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int choice, value;

    while (1) {
        printf("\nMenu:\n1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                insert(&head, value);
                break;
            case 2:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                delete(&head, value);
                break;
            case 3:
                display(head);
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
