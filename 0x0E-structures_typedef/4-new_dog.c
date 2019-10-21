#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - string duplicates
 * @str: char pointer
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
int i = 0;
char *ret;
if (str == NULL)
return (NULL);
while (*str++)
i++;
ret = malloc(sizeof(char) * (i + 1));
if (!ret)
return (NULL);
for (i++; i--;)
ret[i] = *--str;
return (ret);
}
/**
 * new_dog - function of new dog
 * @name: pointer name
 * @age: age float
 * @owner: pointer char
 * Return: return dog_t.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog = malloc(sizeof(dog_t));
if (!dog)
return (NULL);
dog->name = _strdup(name);
if (name && !dog->name)
return (free(dog), NULL);
dog->owner = _strdup(owner);
if (owner && !dog->owner)
return (free(dog->name), free(dog), NULL);
dog->age = age;
return (dog);
}
