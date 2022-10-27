#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: the destination
 * @src: source
 * @n: the amount of bytes from src
 * Return: the pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int e;

	for (e = 0; e < n && src[e] != '\0'; e++)
		dest[e] = src[e];
	for ( ; e < n; e++)
		dest[e] = '\0';

	return (dest);
}
