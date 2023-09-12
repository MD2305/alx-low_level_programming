#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Initialize a struct dog
 * @d: Pointer to the struct dog to initialize
 * @name: Name to set
 * @age: Age to set
 * @owner: Owner to set
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d != NULL)
	{
		d->name = name;
                d->age = age;
                d->owner = owner;
        }
	else
		return (NULL);
}

