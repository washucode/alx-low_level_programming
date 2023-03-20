#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - Dog attributes
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: The attributes of a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_type - Typedef for dog structure
 */
typedef struct dog dog_type;
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
