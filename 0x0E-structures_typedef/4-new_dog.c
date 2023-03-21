#include "dog.h"
#include <stdlib.h>



int _strlen(char *s);
char *_strcpy(char *dest, char *src);




/**
 * new_dog - ...
 * @name: ...
 * @age: ...
 * @owner: ...
 *
 * Return: ...
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *this_dog;
	int n_length = 0, owner_length = 0;

	if (name != NULL && owner != NULL)
	{
		n_length = _strlen(name) + 1;
		owner_length = _strlen(owner) + 1;
		this_dog = malloc(sizeof(dog_t));

		if (this_dog == NULL)
			return (NULL);

		this_dog->name = malloc(sizeof(char) * n_length);
		if (this_dog->name == NULL)
		{
			free(this_dog);
			return (NULL);
		}

		this_dog->owner = malloc(sizeof(char) * owner_length);

		if (this_dog->owner == NULL)
		{
			free(this_dog->name);
			free(this_dog);
			return (NULL);
		}

		this_dog->name = _strcpy(this_dog->name, name);
		this_dog->owner = _strcpy(this_dog->owner, owner);
		this_dog->age = age;
	}
	return (this_dog);
}



/**
 * *_strcpy - copies the string pointed to by src
 *@src: pointer.
 *@dest: pointer.
 *Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int l, length;

	for (length = 0; src[length] != '\0'; length++)
	{
	}

	for (l = 0; l <= length ; l++)
	{
		dest[l] = src[l];
	}
	return (dest);
}

/**
 * _strlen - returnthe length of a string.
 *
 *@s: the string to calculate.
 * Return: returns length of a string.
 */

int _strlen(char *s)
{
	int x;

	int length = 0;

	for (x = 0 ; s[x] != '\0'; x++)
	{
		length++;
	}
	return (length);
}
