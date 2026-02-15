#include <stdio.h>
#include <stdbool.h>

#define MAX 5  // Maximum size of the queue

int queue[MAX];
int front = -1;
int rear = -1;

// Check if the queue is full
bool isFull() {
    return rear == MAX - 1;
}

// Check if the queue is empty
bool isEmpty() {
    return front == -1 || front > rear;
}

// Add an element to the queue (Enqueue)
void enqueue(int value) {
    if (isFull()) {
        printf("Queue Overflow! Cannot add %d\n", value);
    } else {
        if (front == -1) front = 0; // Initialize front on first insertion
        rear++;
        queue[rear] = value;
        printf("Enqueued: %d\n", value);
    }
}

// Remove an element from the queue (Dequeue)
void dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow! Nothing to dequeue.\n");
    } else {
        printf("Dequeued: %d\n", queue[front]);
        front++;
    }
}

// Display the queue elements
void display() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    printf("--- Queue Implementation in C ---\n");

    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    dequeue();
    display();

    return 0;
}