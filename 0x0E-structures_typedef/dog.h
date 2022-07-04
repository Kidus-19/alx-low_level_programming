#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a struct of some dog properties
 * @name: First member
 * @age: Second member
 * @owner: Third membeer
 *
 * Description: age, name, and owner of a dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */
