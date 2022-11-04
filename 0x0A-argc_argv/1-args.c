#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointers to the arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);

	return (0);
}
