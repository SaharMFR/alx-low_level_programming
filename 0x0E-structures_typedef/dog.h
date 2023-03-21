#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Definition of a dog.
 * @name: char type string.
 * @age: type float.
 * @owner: char type string.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif