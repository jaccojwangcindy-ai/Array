#include <stdio.h>
#include <stdlib.h> // For malloc and free

// 1. Define the Node (Same as Linked List)
struct Node {
    int data;
    struct Node* next;
};

// Global pointer for the Top of the stack
struct Node* top = NULL;

// 2. PUSH (Add to the "Head" of the list)
void push(int value) {
    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    
    if (newNode == NULL) {
        printf("Stack Overflow (Out of Memory)\n");
        return;
    }

    newNode->data = value;
    
    // Link the new node to the current top
    newNode->next = top;
    
    // Update the top pointer
    top = newNode;
    
    printf("%d pushed to stack\n", value);
}

// 3. POP (Remove from the "Head" of the list)
void pop() {
    if (top == NULL) {
        printf("Stack Underflow! Nothing to pop.\n");
        return;
    }
    
    struct Node* temp = top; // Hold the node to free it later
    printf("Popped element: %d\n", top->data);
    
    top = top->next; // Move top to the next node
    
    free(temp); // Release the memory! (Crucial in C)
}

// 4. DISPLAY
void display() {
    struct Node* temp = top;
    if (top == NULL) {
        printf("Stack is empty\n");
    } else {
        printf("Stack: ");
        while (temp != NULL) {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main() {
    push(10); // Stack: 10 -> NULL
    push(20); // Stack: 20 -> 10 -> NULL
    push(30); // Stack: 30 -> 20 -> 10 -> NULL

    display();

    pop();    // Removes 30
    display(); // Stack: 20 -> 10 -> NULL

    return 0;
}