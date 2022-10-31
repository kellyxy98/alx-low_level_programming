#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @s: string to be searched
 * @c: character to find
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int l;

	while (1)
	{
		l = *s++;
		if (l == c)
		{
			return (s - 1);
		}
		if (l == 0)
		{
			return (NULL);
		}
	}
}
