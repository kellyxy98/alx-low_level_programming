#include <stdio.h>

/**
 * main - prints alphabets in upper and lower case
 *
 * Return: Always 0 (this is successsful)
 */
int main(void)
{

	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
