#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - gets length of a string
 * @s: the string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strcpy - copies a string
 * @s1: the string to be copied
 * @s2: the string to be copied to
 */
void _strcpy(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
}
/**
 * new_dog - creates a new instance of the dog class
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: the created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *fresh_dog;

	fresh_dog = malloc(sizeof(dog_t));
	if (fresh_dog == NULL)
	{
		return (NULL);
	}
	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	fresh_dog->name = malloc((sizeof(char) * _strlen(name)) + 1);
	if (fresh_dog->name == NULL)
	{
		return (NULL);
	}
	_strcpy(name, fresh_dog->name);
	fresh_dog->owner = malloc((sizeof(char) * _strlen(owner)) + 1);
	if (fresh_dog->owner == NULL)
	{
		return (NULL);
	}
	_strcpy(owner, fresh_dog->owner);
	fresh_dog->age = age;
	return (fresh_dog);
}
