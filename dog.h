#ifndef DOG_H
#define DOG_H

/**
 * struct dog -Struct dog
 * @name: name
 * @ge: age
 * Description: This structure is for dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typdef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif 
