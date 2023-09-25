#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents information about a dog.
 * @name: The name of the dog (a string).
 * @age: The age of the dog (a float).
 * @owner: The owner of the dog (a string).
 *
 * Description: This structure is used to store information about a dog,
 * including its name, age, and owner. It provides a convenient way to
 * group related data together.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - Typedef for struct dog.
 *
 * Description: This typedef creates a new name 'dog_t' for the struct dog
 * type.
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
