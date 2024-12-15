#include <stdio.h>
#include <stdlib.h>

#define V 4

struct adjList
{
    int vertex;
    struct adjList *next;
};

struct adjList *list[V];

void initialize()
{
    int i;
    for (i = 0; i < V; i++)
        list[i] = NULL;
}

void addEdge(int src, int dest)
{
    struct adjList *newnode = (struct adjList*)malloc(sizeof(struct adjList));
    newnode->vertex = dest;
    newnode->next = list[src];
    list[src] = newnode;
}

void printList(int v)
{
    struct adjList *temp = list[v];
    while (temp)
    {
        printf("%d ", temp->vertex);
        temp = temp->next;
    }
}

void BFS(int startVertex)
{
    int visited[V] = {0};

    int i;
    for (i = 0; i < V; i++)
    {
        visited[i] = 0;
    }

    // Create a queue and add the starting vertex to it
    int queue[V];
    int front = -1, rear = -1;
    queue[++rear] = startVertex;
    visited[startVertex] = 1;

    while (front < rear)
    {
        // Dequeue a vertex from the queue
        int k = queue[++front];

        // Print the dequeued vertex
        printf("%d ", k);

        // Go through all neighbors of the current vertex and add
        // them to the queue if they haven't been visited
        struct adjList *temp = list[k];
        while (temp)
        {
            if (!visited[temp->vertex])
            {
                visited[temp->vertex] = 1;
                queue[++rear] = temp->vertex;
            }
            temp = temp->next;
        }
    }
}

int main()
{
    initialize();

    addEdge(0, 1);
    addEdge(0, 3);
    addEdge(1, 2);
    addEdge(3, 1);

    printf("BFS traversal:\n");
    BFS(0);

    return 0;
}