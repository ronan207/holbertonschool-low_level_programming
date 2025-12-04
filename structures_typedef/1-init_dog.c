#include <stddef.h>
#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog
 * @name: the dog's name
 * @owner: the owner's name
 * @age: the dog's age
 * @d : is my variable
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

d->name = name;
d->age = age;
d->owner = owner;

}
