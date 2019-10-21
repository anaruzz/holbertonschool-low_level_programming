#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - copy a string
* @str: pointer to string
* Return: pointer
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
 * new_dog - create dog
 * @name: string
 * @age: float
 * @owner: string
 * Return: Void.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);
d->name = _strdup(name);
if (d->name == NULL)
{
free(d);
return (NULL);
}
d->age = age;
d->owner = _strdup(owner);
if (d->owner == NULL)
{
free(d);
return (NULL);
}
if (d == NULL)
return (NULL);
return (d);
}
