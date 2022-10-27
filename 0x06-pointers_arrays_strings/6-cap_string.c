#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: the string to capitalize
 *
 * Return: the address of s
 */
char *cap_string(char *s)
{
	int counts = 0, i;
	int set_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + counts) >= 97 && *(s + counts) <= 122)
		*(s + counts) = *(s + counts) - 32;
	counts++;
	while (*(s + counts) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + counts) == set_words[i])
			{
				if ((*(s + (counts + 1)) >= 97) && (*(s + (counts + 1)) <= 122))
					*(s + (counts + 1)) = *(s + (counts + 1)) - 32;
				break;
			}
		}
		counts++;
	}
	return (s);
}
