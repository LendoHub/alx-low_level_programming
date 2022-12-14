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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG */
