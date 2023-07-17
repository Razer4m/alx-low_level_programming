#ifndef DOG_H_
#define DOG_H_

typedef struct dog dog_t;

/**
 * struct dog - Stores doc information
 * @name: name of the dog
 * @age: of the dog
 * @owner: Name of the owner of the dog
 *
 * Description: struct called "dog" that stores its name, its age
 * and the name of its owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
