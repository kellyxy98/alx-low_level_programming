#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string to be printed
 */
void puts_half(char *str)
{
	int index = 0, lent = 0, i;

	while (str[index++])
		lent++;

	if ((lent % 2) == 0)
		i = lent / 2;

	else
		i = (lent + 1) / 2;

	for (index = i; index < lent; index++)
		_putchar(str[index]);

	_putchar('\n');
}
