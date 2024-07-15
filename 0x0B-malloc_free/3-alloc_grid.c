#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created by alloc_grid
 * @grid: pointer to the grid
 * @height: height of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
    int i;

    for (i = 0; i < height; i++)
        free(grid[i]);
    free(grid);
}

/**
 * alloc_grid - returns a pointer to a 2-dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the 2D array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

    if (width <= 0 || height <= 0)
        return (NULL);

    grid = malloc(height * sizeof(int *));
    if (grid == NULL)
        return (NULL);

    for (i = 0; i < height; i++)
    {
        grid[i] = malloc(width * sizeof(int));
        if (grid[i] == NULL)
        {
            free_grid(grid, i);
            return (NULL);
        }
        for (j = 0; j < width; j++)
            grid[i][j] = 0;
    }

    return (grid);
}
