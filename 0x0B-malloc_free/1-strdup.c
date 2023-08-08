#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to the newly allocated memory
 * containing a copy of the string
 * @str: pointer to input string
 * Return: pointer to the duplicate string
 */
char *_strdup(char *str)
{
	char *duplicate;
	int a,  length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length])
		length++;

	duplicate = malloc(length * sizeof(char) + 1);
	if (duplicate == NULL)
		return (NULL);

	for (a = 0; a < length; a++)
		duplicate[a] = str[a];
	duplicate[length] = '\0';

	return (duplicate);
}

