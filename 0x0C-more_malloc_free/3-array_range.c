#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: 1st integer number
 * @max: last integer number
 *
 * Return: pointer to the newly created array or NULL if fails
 */
int *array_range(int min, int max)
{
	int j, k;
	int *a;

	if (min > max)
		return (NULL);
	k = max - min + 1;
	a = malloc(sizeof(int) * k);
	if (a == NULL)
		return (NULL);
	for (j = 0; j < k; j++, min++)
	{
		a[j] = min;
	}
	return (a);
}
