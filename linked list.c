#include <stdio.h>
#include <stdlib.h> // Required for malloc

// 1. Define the Node
struct Node {
    int data;
    struct Node* next;
};

int main() {
    // 2. Initialize pointers for our nodes
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    // 3. Allocate memory in the "Heap" (Dynamic Memory)
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    // 4. Assign Data and Link them!
    
    // First Node
    head->data = 10;       // Set value
    head->next = second;   // Point to the next node

    // Second Node
    second->data = 20;
    second->next = third;  // Point to the third node

    // Third Node
    third->data = 30;
    third->next = NULL;    // NULL means "End of the list"

    // 5. Traverse (Print) the list
    struct Node* temp = head; // Start at the head
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next; // Move to the next node
    }
    printf("NULL\n");

    return 0;
}