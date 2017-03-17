#include "shell.h"

/**
 * _strlen - finds the length of a string, excluding the null character
 * @str: pointer to string (arrary of characters)
 *
 * Return: length of string (unsigned int)
 */

unsigned int _strlen(char *str)
{
        unsigned int i;

        for (i = 0; str[i] != '\0'; i++)
        {
		;
        }

        return (i);
}

/**
 * *_memset - function that fills memory with a constant byte
 * @s: pointer to memory area s
 * @b: constant byte
 * @n: number of bytes of memory area pointed to by s
 *
 * Return: pointer to memory area (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}

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
        dup = malloc(length);

        if (dup == NULL)
                return (NULL);

        return (_memcpy(dup, src, length));

}

/**
 * _strcpy - copies a string
 *@dest: points to buffer
 *@src: points to string
 *
 * Return: the pointer to dest
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * *_strcat - concatenates two strings
 * @dest: string to be added to
 * @src: string to be appended
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}

	return (dest);
}

/**
 * _strncmp - compares (n) amount of characters of two strings.
 * @s1: A string.
 * @s2: A string.
 * @n: Amount of characters to compare.
 *
 * Return: 1 if the strings don't match otherwise return 0.
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	for (i = 0; i < n && s2[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			return (1);
		}
	}
	return (0);
}
