#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Function that finds the length of a string.
 * @str: The string to be measured.
 * Return: The length of the string.
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - Function that copies a string pointed to by src, including the
 * terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * Return: The pointer to dest.
 */

char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 * Return: The new struct dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_best_friend;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog_best_friend = malloc(sizeof(dog_t));
	if (dog_best_friend == NULL)
		return (NULL);

	dog_best_friend->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog_best_friend->name == NULL)
	{
		free(dog_best_friend);
		return (NULL);
	}

	dog_best_friend->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog_best_friend->owner == NULL)
	{
		free(dog_best_friend->name);
		free(dog_best_friend);
		return (NULL);
	}

	dog_best_friend->name = _strcopy(dog_best_friend->name, name);
	dog_best_friend->age = age;
	dog_best_friend->owner = _strcopy(dog_best_friend->owner, owner);

	return (dog_best_friend);
}
