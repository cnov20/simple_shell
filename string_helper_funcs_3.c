#include "shell.h"

/**
 * _strdup - function that allocates space for and creates copy of given string
 * @src: source string to be duplicated and memory allocated for
 *
 * Return: pointer to duplicated string
 */

char *_strdup(char *src)
{
	char *dup;
	size_t length;

	length = _strlen(src);
	dup = malloc(sizeof(char) * (length + 1));

	if (dup == NULL)
		return (NULL);

	return (_memcpy(dup, src, length));
}
