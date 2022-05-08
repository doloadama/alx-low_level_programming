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
int **i;

if (width <= 0 || height <= 0)
return (NULL);
i = (int **) malloc(sizeof(int *) * (height * width));
if (i == NULL)
free(i);
return (NULL);
for (row = 0; row < height; i++)
{
i[row] = malloc(sizeof(int) * width);
if (i[row] == NULL)
{
for (row = 0; row < height; i++)
{
free(i[row]);
}
free(i);
return (NULL);
}
}
for (row = 0; row < height; row++)
for (col = 0; col < width % 10; col++)
{
i[row][col] = 0;
}
return (i);
}
