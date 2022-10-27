#include "main.h"

/**
 * print_number - prints an integer
 * @n: input integer
 * Return: no return
 */
void print_number(int n)
{
	unsigned int m, o, counts;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}

	o = m;
	counts = 1;

	while (o > 9)
	{
		o /= 10;
		counts *= 10;
	}

	for (; counts >= 1; counts /= 10)
	{
		_putchar(((m / counts) % 10) + 48);
	}
}
