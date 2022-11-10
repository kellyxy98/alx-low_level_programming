#include "main.h"
#include <stdlib.h>

/**
 * _print - moves a string one place to the left and print
 * @str: string to be moved
 * @l: the size of the string
 *
 * Return: void
 */
void _print(char *str, int l)
{
	int a, b;

	a = b = 0;
	while (a < l)
	{
		if (str[a] != '0')
			b = 1;
		if (b || a == l - 1)
			_putchar(str[a]);
		a++;
	}

	_putchar('\n');
	free(str);
}

/**
 * mul - multiplies a char with a string and place the answer into dest
 * @n: char to multiply
 * @num: string to be multiplied
 * @num_index: last non NULL index of num
 * @dest: destination of multiplication
 * @dest_index: highest index to start adding
 *
 *  Return: pointer to dest or NULL if fail
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int g, h, mul, mulrem, add, addrem;

	mulrem = addrem = 0;
	for (g = num_index, h = dest_index; g >= 0; g--, h--)
	{
		mul = (n - '0') * (num[g] - '0') + mulrem;
		mulrem = mul / 10;
		add = (dest[h] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		dest[h] = add % 10 + '0';
	}
	for (addrem += mulrem; h >= 0 && addrem; h--)
	{
		add = (dest[h] - '0') + addrem;
		addrem = add / 10;
		dest[h] = add % 10 + '0';
	}
	if (addrem)
	{
		return (NULL);
	}
	return (dest);
}
/**
 * check_for_digits - checks the arguments to ensure they are digits
 * @av: pointers to the arguments
 *
 * Return: 0 if digits and 1 if not
 */
int check_for_digits(char **av)
{
	int a, b;

	for (a = 1; a < 3; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			if (av[a][b] < '0' || av[a][b] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * init - initializes a string
 * @str: string to initialize
 * @l: length of string
 *
 * Return: void
 */
void init(char *str, int l)
{
	int a;

	for (a = 0; a < l; a++)
		str[a] = '0';
	str[a] = '0';
}

/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: arguments vector
 *
 * Return: zero or exit status of 98 if fail
 */
int main(int argc, char *argv[])
{
	int f1, f2, fn, ki, i;
	char *b;
	char *k;
	char e[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
		for (ki = 0; e[ki]; ki++)
			_putchar(e[ki]);
		exit(98);
	}
	for (f1 = 0; argv[1][f1]; f1++)
		;
	for (f2 = 0; argv[2][f2]; f2++)
		;
	fn = f1 + f2 + 1;
	b = malloc(fn * sizeof(char));
	if (b == NULL)
	{
		for (ki = 0; e[ki]; ki++)
			_putchar(e[ki]);
		exit(98);
	}
	init(b, fn - 1);
	for (ki = f2 - 1, i = 0; ki >= 0; ki--, i++)
	{
		k = mul(argv[2][ki], argv[1], f1 - 1, b, (fn - 2) - i);
		if (k == NULL)
		{
			for (ki = 0; e[ki]; ki++)
				_putchar(e[ki]);
			free(b);
			exit(98);
		}
	}
	_print(b, fn - 1);
	return (0);
}
