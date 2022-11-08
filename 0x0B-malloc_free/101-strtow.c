#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - frees the two dimensional array
 * @grid: multidimensional array of char
 * @height: height of the array
 * Return: no return
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}
/**
 * strtow - splits a string into words
 * @str: string
 * Return: pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **aout;
	unsigned int c, height, q, r, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	aout = malloc((height + 1) * sizeof(char *));
	if (aout == NULL || height == 0)
	{
		free(aout);
		return (NULL);
	}
	for (q = a1 = 0; q < height; q++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				aout[q] = malloc((c - a1 + 2) * sizeof(char));
				if (aout[q] == NULL)
				{
					ch_free_grid(aout, q);
					return (NULL);
				}
				break;
			}
		}
		for (r = 0; a1 <= c; a1++, r++)
			aout[q][r] = str[a1];
		aout[q][r] = '\0';
	}
	aout[q] = NULL;
	return (aout);
}

