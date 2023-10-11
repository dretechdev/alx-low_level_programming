#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - This function finds the length of a string
 * @s: This is the string whose length is needed
 *
 * Return: The length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcpy - This copies string
 * @dest: This is the destination string
 * @src: This is the source string
 *
 * Return: Returns the copied string
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = _strlen(src);
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates new dog
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int l1, l2;

	l1 = _strlen(name);
	l2 = _strlen(owner);

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	ndog->name = malloc(sizeof(char) * (l1 + 1));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->owner = malloc(sizeof(char) * (l2 + 1));
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	_strcpy(ndog->name, name);
	_strcpy(ndog->owner, owner);
	ndog->age = age;
	return (ndog);
}
