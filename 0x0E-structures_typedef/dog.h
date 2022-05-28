#ifndef DOG_H
#define DOG_H

#include "stdio.h"
#include "stdlib.h"
/**
 * struct dog - attributes of a dog
 * @name: label of dog
 * @age: years of dog
 * @owner: in charge
 * Return: structure data
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif

