#include <stdio.h>
#define v 4

int graph[v][v] = {
    {0, 1, 1, 0},
    {0, 0, 1, 1},
    {1, 0, 0, 1},
    {0, 0, 0, 0}};

int result[v][v];

void transclousure()
{
    int i, j, k;

    // copy the graph into result matrix
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            result[i][j] = graph[i][j];
        }
    }
    for (int k = 0; k < v; k++)
    {
        for (int i = 0; i < v; i++)
        {
            for (int j = 0; j < v; j++)
            {
                result[i][j] = result[i][j] || (result[i][k] && result[k][j]);
            }
        }
    }

    // printing the transitive closure
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

int main(){

    transclousure();

    return 0;
}