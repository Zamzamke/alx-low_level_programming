#ifndef DOG_H
#define DOG_H

/**
 *struct dog - Poppy's info
 *@name: First member
 *@age: Second member
 *@owner: Third member
 *
 * Description:Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif



