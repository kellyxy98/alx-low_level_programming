#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 * Return: the address of s
 */
char *leet(char *s)
{
	int d, e;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (d = 0; *(s + d); d++)
	{

		for (e = 0; e <= 9; e++)
		{
			if (a[e] == *(s + d))
				*(s + d) = b[e];
		}
	}
	return (s);
}
