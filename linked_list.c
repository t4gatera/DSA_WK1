#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to convert an array to a linked list
struct Node* arrayToLinkedList(int arr[], int size) {
    if (size == 0) return NULL;

    // Create the head of the linked list
    struct Node* head = createNode(arr[0]);
    struct Node* current = head;

    // Iterate through the array and create linked list nodes
    for (int i = 1; i < size; i++) {
        current->next = createNode(arr[i]);
        current = current->next;
    }

    return head;
}

// Function to print the linked list
void printLinkedList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    // Array to be converted to linked list
    int a[8] = {3, 2, 7, 5, 9, 6, 4, 8};

    // Convert array to linked list
    struct Node* head = arrayToLinkedList(a, 8);

    // Print the linked list
    printLinkedList(head);

    return 0;
}

