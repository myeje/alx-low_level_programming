#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - dog structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: Pointer to structure or NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *namecp, *ownercp;
	int lname = 0, lowner = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[lname])
		lname++;
	while (owner[lowner])
		lowner++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	namecp = malloc(sizeof(lname + 1));
	if (namecp == NULL)
		return (NULL);
	for (i = 0; i < lname; i++)
		namecp[i] = name[i];
	namecp[i] = '\0';

	ownercp = malloc(sizeof(lowner + 1));
	if (ownercp == NULL)
		return (NULL);
	for (i = 0; i < lowner; i++)
		ownercp[i] = owner[i];
	ownercp[i] = '\0';

	new_dog->name = namecp;
	new_dog->age = age;
	new_dog->owner = ownercp;
	return (new_dog);
}
