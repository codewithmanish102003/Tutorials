#include <stdio.h>
#include <stdlib.h> // Include stdlib.h for printf function

#define V 5

// Initialize the matrix to zero
void init(int arr[][V])
{
    for (int i = 0; i < V; i++)
        for (int j = 0; j < V; j++)
            arr[i][j] = 0;
}

// Add edges
void addEdge(int arr[][V], int i, int j)
{
    arr[i][j] = 1;
    arr[j][i] = 1;
}

// Print the matrix
void printAdjMatrix(int arr[][V])
{ // Corrected return type to void
    for (int i = 0; i < V; i++)
    {
        printf("%d: ", i);
        for (int j = 0; j < V; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void DFS(int i, int arr[][V], int visited[])
{ // Added visited array parameter
    printf("%d ", i);
    visited[i] = 1;
    for (int j = 0; j < V; j++)
    {
        if (arr[i][j] == 1 && !visited[j])
        {
            DFS(j, arr, visited); // Added visited array parameter
        }
    }
}

int main()
{
    int adjMatrix[V][V];

    init(adjMatrix);
    addEdge(adjMatrix, 0, 1);
    addEdge(adjMatrix, 0, 2);
    addEdge(adjMatrix, 0, 3);
     addEdge(adjMatrix, 1, 0);
    addEdge(adjMatrix, 1, 2);
    addEdge(adjMatrix, 2, 0);
     addEdge(adjMatrix, 2, 1);
     addEdge(adjMatrix, 2, 4);
    addEdge(adjMatrix, 3, 0);
     addEdge(adjMatrix, 4, 2);

    printAdjMatrix(adjMatrix);
    printf("DFS Traversal of graph is \n");
    int visited[V] = {0};       // Initialize visited array
    DFS(4, adjMatrix, visited); // Pass visited array to DFS function

    return 0;
}
