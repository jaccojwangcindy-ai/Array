#include <stdio.h>
#include <stdlib.h>

// Define the structure of a tree node
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a node in the Binary Search Tree
struct Node* insert(struct Node* root, int value) {
    // If the tree/branch is empty, create the node here
    if (root == NULL) {
        return createNode(value);
    }

    // Otherwise, recur down the tree
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root;
}

// In-order Traversal (Left, Root, Right)
void inOrder(struct Node* root) {
    if (root != NULL) {
        inOrder(root->left);
        printf("%d -> ", root->data);
        inOrder(root->right);
    }
}

int main() {
    struct Node* root = NULL;

    printf("--- Binary Search Tree in C ---\n");

    /* Creating the following tree:
              50
             /  \
            30   70
           /  \
          20  40
    */
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);

    printf("In-order Traversal (Sorted): ");
    inOrder(root);
    printf("NULL\n");

    return 0;
}