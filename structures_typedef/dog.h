#ifndef DOG_H
#define DOG_H

/**
 * struct dog - information about a dog
 * @name: the dog's name
 * @owner: the owner's name
 * @age: the dog's age
 */
typedef struct dog
{
char *name;
char *owner;
float age;

} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif /* DOG_H */
