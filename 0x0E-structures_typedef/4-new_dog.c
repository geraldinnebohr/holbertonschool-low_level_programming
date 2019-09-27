#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strlen - returns the length of a string
 *@s: is a character
 * Return: 0;
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return ((1) + _strlen(s + 1));
}

/**
 *new_dog - function that creates a new dog
 *@name: is a character
 *@age: is a float
 *@owner: is a character
 *Return: Pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *s;
	int i, j;

	int a = _strlen(name);
	int b = _strlen(owner);

	s = malloc(sizeof(dog_t));

	if (s == NULL)
		return (NULL);

	s->name = malloc(sizeof(char) * (a + 1));

	if (s->name == NULL)
	{
		free(name);
		return (NULL);
	}

	for (i = 0; i <= a; i++)
		s->name[i] = name[i];

	s->age = age;
	s->owner = malloc(sizeof(char) * (b + 1));

	if (s->owner == NULL)
	{
		free(s->name);
		free(s);
		return (NULL);
	}

	for (j = 0; j <= b; j++)
		s->owner[j] = owner[j];

	return (s);
}
