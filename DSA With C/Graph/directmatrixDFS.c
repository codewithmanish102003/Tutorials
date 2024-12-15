//Direct DFS using adjancy matrix
#include <stdio.h>

#define V 4

int visited[V];
int graph[V][V] = {
    {0, 1, 1, 0},
    {1, 0, 1, 0},
    {1, 1, 0, 1},
    {0, 0, 1, 0}
};

void DFS(int vertex)
{
    printf("%d ", vertex);
    visited[vertex] = 1;

    int i;
    for (i = 0; i < V; i++)
    {
        if (graph[vertex][i] && !visited[i])
            DFS(i);
    }
}

int main()
{
    int startVertex;
    printf("Enter the starting vertex: ");
    scanf("%d", &startVertex);

    DFS(startVertex);

    return 0;
}