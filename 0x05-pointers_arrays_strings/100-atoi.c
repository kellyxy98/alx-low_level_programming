#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 *
 * Return: integer value of the converted string
 */
int _atoi(char *s)
{
	int sin = 1;
	unsigned int fig = 0;

	do {
		if (*s == '-')
			sin *= -1;

		else if (*s >= '0' && *s <= '9')
			fig = (fig * 10) + (*s - '0');

		else if (fig > 0)
			break;
	} while (*s++);

	return (fig * sin);
}
