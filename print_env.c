#include "shell.h"

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
