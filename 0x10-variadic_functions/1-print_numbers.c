#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: separator to print between numbers
 * @n: number of numbers to print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(num);
}
