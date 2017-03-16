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

        for (i = 0; i != '\0'; i++)
        {
                _putchar(str[i]);
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
