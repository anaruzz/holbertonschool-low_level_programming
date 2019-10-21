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

unsigned int i, j;
char *t;
if (str == NULL)
return (NULL);

i = 0;
while (str[i])
i++;

t = malloc(sizeof(char) * i + 1);
if (t == NULL)
return (NULL);

for (j = 0 ; j < i; j++)
t[j] = str[j];
t[j + 1] = '\0';
return (t);


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
d->owner = _strdup(d->owner);
if (d->owner == NULL)
{
free(d);
return (NULL);
}
if (d == NULL)
return (NULL);
return (d);
}
