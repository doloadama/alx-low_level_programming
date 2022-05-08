#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: the number of row
 * @height: the number of column
 * Return: a pointer to a 2 dimensional array
 * or Null on failure or width and height is <=0
 */

int **alloc_grid(int width, int height)
{
int row, col;
int **nb;
if (width <= 0 || height <= 0)
{
return (NULL);
}
nb = malloc(height * sizeof(int *);
if (nb == NULL)
{
return (NULL);
}
for (row = 0; row < height; row++)
{
  nb[row] = malloc(width * sizeof(int));
if (nb[row] == NULL)
{
for (col = 0; col < row; col++)
free(nb[col]);
free(nb);
return (NULL);
}
for (col = 0; col < width; col++)
{
nb[row][col] = 0;
}
}
return (nb);
}
