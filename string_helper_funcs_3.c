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

/**
 * _atoi - converts string to integer
 * @s: string to be converted
 *
 * Return: (int)
 */

int _atoi(char *s)
{
	int i = 0;
	int j = -1;
	int result = 0;
	int isnum = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			j *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = (result * 10) - (s[i] - '0');
			isnum = 1;
		}
		else if (isnum == 1)
		{
			break;
		}
	}
	return (result * j);
}
