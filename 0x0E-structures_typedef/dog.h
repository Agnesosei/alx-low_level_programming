#ifndef _DOG_H_
#define _DOG_H_

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
