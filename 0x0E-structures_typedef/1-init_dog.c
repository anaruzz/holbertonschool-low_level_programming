#include "dog.h"
 /**
 * init_dog - initialize variable of type struct dog
 * d: struct dog
 * name: string
 * age: float age
 * owner: owner
 * Return: Void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
