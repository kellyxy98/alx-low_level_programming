#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string containing characters
 */
void puts2(char *str)
{
	int index = 0, lent = 0;

	while (str[index++])
		lent++;

	for (index = 0; index < lent; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
