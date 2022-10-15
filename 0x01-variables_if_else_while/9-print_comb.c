#include <stdio.h>

/**
 * main - prints numbers within 0 to 9, with commas and spaces.
 *
 * Return: Always 0 (this is successful)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
