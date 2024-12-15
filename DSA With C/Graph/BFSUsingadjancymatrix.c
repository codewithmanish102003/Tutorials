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
// Initialize visited array
int visited[V] = {0};
void BFS(int startVertex, int adjMatrix[][V])
{
    visited[startVertex] = 1;

    int queue[V], rear = -1, front = -1;

    queue[++rear] = startVertex;

    while (front < rear)
    {
        int currentVertex = queue[++front];

        printf("%d ", currentVertex);

        int i;
        for (i = 0; i < V; i++)
        {
            if (adjMatrix[currentVertex][i] == 1 && visited[i] == 0)
            {
                queue[++rear] = i;
                visited[i] = 1;
            }
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
    printf("BFS Traversal of graph is \n");

    BFS(4, adjMatrix); // Pass visited array and adjacency matrix to BFS function

    return 0;
}