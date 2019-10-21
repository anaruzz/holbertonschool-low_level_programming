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
 * print_dog - check the code for Holberton School students.
 * @d: struct dog
 * Return: Void.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
d = malloc(sizeof(dog_t));
d->name = name;
d->age = age;
d->owner = owner;
_strdup(d->name);
_strdup(d->owner);
if (d == NULL)
return (NULL);
return (d);
}
