#ifndef DOG_FILE
#define DOG_FILE

/**
 * struct dog - structure dog
 * @name: a pointer to name of dog
 * @age: age of dog with float type
 * @owner: a pointer to the owner of the dog
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

#endif
