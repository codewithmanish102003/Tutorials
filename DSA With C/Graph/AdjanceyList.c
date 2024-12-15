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

    // Add edges in opposite direction when using undirected graph
    newnode = (struct adjList*)malloc(sizeof(struct adjList));
    newnode->vertex = src;
    newnode->next = list[dest];
    list[dest] = newnode;
}

void printGraph()
{
    int i;
    for (i = 0; i < V; i++)
    {
        struct adjList *temp = list[i];
        printf("\nAdjacency list of vertex %d:\n", i);
        while (temp != NULL)
        {
            printf("-> %d", temp->vertex);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main()
{
    initialize();

    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(1, 2);
    addEdge(0, 3);

    printGraph();

    return 0;
}