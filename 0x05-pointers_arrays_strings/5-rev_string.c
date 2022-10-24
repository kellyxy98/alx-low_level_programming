#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input string
 * Return: string in reverse
 */
void rev_string(char *s)
{
	char revv = s[0];
	int counters = 0;
	int i;

	while (s[counters] != '\0')
		counters++;
	for (i = 0; i < counters; i++)
	{
		counters--;
		revv = s[i];
		s[i] = s[counters];
		s[counters] = revv;
	}
}
