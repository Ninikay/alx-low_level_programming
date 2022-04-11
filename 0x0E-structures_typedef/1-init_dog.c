#include <stdlib.h>
#include "dog.h"

/**
  * init_dog -initializes a variable of type struct dog
  * @d: Input dog structure.
  * @name: Input name of the dog.
  * @age: Input age of the dog.
  * @owner: Input owner of the dog.
  *
  * Return: void
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
