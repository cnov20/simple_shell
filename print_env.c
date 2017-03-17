#include "shell.h"

/**
 * _print_env - function that prints the user environment - list of variables
 *
 * Return: EXIT_SUCCESS macro (value of 0) - ON SUCCESS
 */


int _print_env(void)
{
	int i;

	if (environ == NULL)
		return (EXIT_FAILURE);

	for (i = 0; environ[i] != NULL; i++)
	{
		_putstring(environ[i]);
		_putchar('\n');
	}

	return (EXIT_SUCCESS);
}
