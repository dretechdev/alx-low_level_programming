#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - This finds the length of a string
 * @s: This is the string whose length is needed
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcpy - This function copies a string
 * @dest: This is the destination str
 * @src: This is the source we copy from
 * Return: This returns the copied string
 */

char *_strcpy(char *dest, char *src)
{
	int length, i;

	length = _strlen(src);
	for (i = 0; i < length; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - This function creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: Owner of dog
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int length1, length2;

	length1 = _strlen(name);
	length2 = _strlen(owner);

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	ndog->name = malloc(sizeof(char) * (length1 + 1));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->owner = malloc(sizeof(char) * (length2 + 1));
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
