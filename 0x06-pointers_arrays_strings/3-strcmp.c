#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: 0 if s1 == s2, otherwise, another number
 */

int _strcmp(char *s1, char *s2)
{
	int e = 0, o = 0;

	while (o == 0)
	{
		if ((*(s1 + e) == '\0') && (*(s2 + e) == '\0'))
			break;
		o = *(s1 + e) - *(s2 + e);
		e++;
	}

	return (o);
}
