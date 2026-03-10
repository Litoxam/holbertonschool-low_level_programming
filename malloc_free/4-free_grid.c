#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


/**
 * free_grid -  frees a 2 dimensional grid previously created
 * @grid: grid previously created
 * @height: height of the grid
 *
 * Return: no return
 *
 */


void free_grid(int **grid, int height)

{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
		free(grid);

}
