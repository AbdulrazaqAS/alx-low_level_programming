#include <stddef.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age < 0 || owner ++ NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = mallloc(sizeof(char) * (_strlen(name) + 1));
}
