//Direct BFS using adjancy matrix
#include <stdio.h>
#define V 4

int graph[V][V] = {
    {0, 1, 0, 1},
    {1, 0, 1, 0},
    {0, 1, 0, 1},
    {1, 0, 1, 0}
};

int visited[V] = {0};

void BFS(int startVertex)
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
            if (graph[currentVertex][i] == 1 && visited[i] == 0)
            {
                queue[++rear] = i;
                visited[i] = 1;
            }
        }
    }
}

int main()
{
    printf("BFS traversal:\n");
    BFS(0);

    return 0;
}