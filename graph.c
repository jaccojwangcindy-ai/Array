#include <stdio.h>

#define V 5  // Total number of vertices (nodes) in the graph

// Function to initialize the matrix to all zeros
void initGraph(int arr[][V]) {
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            arr[i][j] = 0;
        }
    }
}

// Function to add a connection (edge) between two nodes
void addEdge(int arr[][V], int src, int dest) {
    arr[src][dest] = 1;
    arr[dest][src] = 1; // Remove this line if the graph is directed (one-way)
}

// Function to print the graph
void printGraph(int arr[][V]) {
    printf("\nAdjacency Matrix:\n");
    for (int i = 0; i < V; i++) {
        printf("Node %d: ", i);
        for (int j = 0; j < V; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // 1. Create the matrix
    int adjMatrix[V][V];

    // 2. Clear the matrix (set all to 0)
    initGraph(adjMatrix);

    // 3. Add connections
    // Example: Connecting Node 0 to Node 1
    addEdge(adjMatrix, 0, 1);
    addEdge(adjMatrix, 0, 4);
    addEdge(adjMatrix, 1, 2);
    addEdge(adjMatrix, 1, 3);
    addEdge(adjMatrix, 1, 4);
    addEdge(adjMatrix, 2, 3);
    addEdge(adjMatrix, 3, 4);

    // 4. Display the graph
    printGraph(adjMatrix);

    return 0;
}