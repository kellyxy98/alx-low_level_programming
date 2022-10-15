#include <stdio.h>

/**
 * main - prints reversed alphabets
 *
 * Return: Always 0 (this is successful)
 */
int main(void)
{

	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
