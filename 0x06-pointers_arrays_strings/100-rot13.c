#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to encode
 * Return: address of s
 */
char *rot13(char *s)
{
	int d, e;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (d = 0; *(s + d); d++)
	{
		for (e = 0; e < 52; e++)
		{
			if (a[e] == *(s + d))
			{
				*(s + d) = b[e];
				break;
			}
		}
	}
	return (s);
}
