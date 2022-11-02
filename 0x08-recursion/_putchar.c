#include "main.h"
#include <unistd.h>

/**
 * _puchtar - writes the charactr in c to stdout
 * @c: The character to print
 *
 * Return: on success 1
 * On error, -1 is returned and error is set appropriately
 */
int _puchtar(char c)
{
	return(write(1, &c, 1));
}
