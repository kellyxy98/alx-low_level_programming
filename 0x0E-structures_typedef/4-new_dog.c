#include <stdlib.h>
#include "dog.h"

/**
 * #include "dog.h"
 * @s: string to be evaluated
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int lent, a;

	lent = 0;

	while (src[lent] != '\0')
	{
		lent++;
	}

	for (a = 0; a < lent; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}

/**
 * new_dog - creates new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: struct dog, else NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ddog;
	int lent1, lent2;

	lent1 = _strlen(name);
	lent2 = _strlen(owner);

	ddog = malloc(sizeof(dog_t));
	if (ddog == NULL)
		return (NULL);

	ddog->name = malloc(sizeof(char) * (lent1 + 1));
	if (ddog->name == NULL)
	{
		free(ddog);
		return (NULL);
	}
	ddog->owner = malloc(sizeof(char) * (lent2 + 1));
	if (ddog->owner == NULL)
	{
		free(ddog);
		free(ddog->name);
		return (NULL);
	}
	_strcpy(ddog->name, name);
	_strcpy(ddog->owner, owner);
	ddog->age = age;

	return (ddog);
}
