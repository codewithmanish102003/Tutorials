#include <stdio.h>

int main()
{
    int rows, cols;

    // Get the dimensions (rows and columns) from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    // Initialize a 2D array with the specified dimensions
    int array_2d[rows][cols];

    // Populate the 2D array with user input
    printf("Enter elements for the 2D array:\n");
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            printf("Enter element at row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &array_2d[i][j]);
        }
    }

    // Print the 2D array
    printf("2D Array:\n");
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            printf("%d ", array_2d[i][j]);
        }
        printf("\n");
    }

    return 0;
}
