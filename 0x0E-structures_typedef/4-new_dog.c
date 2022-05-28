#include "dog.h"

/**
 * _strlen - gives the strings length
 * @s: string input
 * Return: the length on a string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcpy - copies the string from a source to destination
 * @dest: destination string
 * @src: source string
 * Return: the pointer to the dstination
 */
char *_strcpy(char *dest, char *src)
{
	int i, k;

	k = 0;

	while (src[k] != '\0')
	{
		k++;
	}
	for (i = 0; i < k; ++i)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 *new_dog - create new instance of a dog
 *@name: name of dog
 *@age: age of dog
 *@owner: name of owner
 *Return: pointer to new instance of dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len1, len2;
	dog_t *dog;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
