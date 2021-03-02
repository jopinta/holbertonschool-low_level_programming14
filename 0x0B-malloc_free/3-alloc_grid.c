#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - return bidimentional array
 * @width: width of array
 * @height: height of array
 *
 * Return: array of int.
 */
int **alloc_grid(int width, int height)
{
int **grid;
int h, w;

if (width <= 0 || height <= 0)
return (NULL);
grid = (int **)malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);
for (h = 0; h < height; h++)
{
grid[h] = (int *)malloc(width * sizeof(int));
if (!grid[h])
{
for (w = 0; w < h; w++)
free(grid[w]);
free(grid);
return (NULL);
}
for (w = 0; w < width; w++)
grid[h][w] = 0;
}
return (grid);
}
