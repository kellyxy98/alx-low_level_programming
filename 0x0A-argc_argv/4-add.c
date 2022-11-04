#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the addition of positive numbers followed by a new line
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 *  Return: -1 if any number contains symbols that are non-digits, otherwise 0
 */
int main(int argc, char *argv[])
{
	int n, digit, sum = 0;

	for (n = 1; n < argc; n++)
	{
		for (digit = 0; argv[n][digit]; digit++)
		{
			if (argv[n][digit] < '0' || argv[n][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[n]);
	}

	printf("%d\n", sum);

	return (0);
}
