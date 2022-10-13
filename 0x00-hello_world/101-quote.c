#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - prints with function write
 *
 * Return: Always 1 (this is successful)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
