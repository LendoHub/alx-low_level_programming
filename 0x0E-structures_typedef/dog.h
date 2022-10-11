#ifndef STRCTEX
#define STRCTEX

/**
 * struct dog - creates a structure of a dog
 * @name: Name of dog
 * @age: age of dog
 * @owner: the dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog1;

void inti_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog1 *new_dog(char *name, float age, char *owner);
void free_dog(dog1 *d);
#endif /* DOG */
