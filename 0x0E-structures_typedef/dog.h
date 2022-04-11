#ifndef THIS
#define THIS
/**
 * struct dog - create a new data type of dog
 * @name: first member
 * @age: second member
 * @owner: third member
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
