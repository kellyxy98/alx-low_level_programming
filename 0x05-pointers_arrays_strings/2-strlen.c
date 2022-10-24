#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: input string
 * Return: length of a string
 */
int _strlen(char *s)
{
	int counts = 0;

	while (*(s + counts) != '\0')
		counts++;
	return (counts);
}
