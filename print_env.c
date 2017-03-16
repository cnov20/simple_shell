#include "shell.h"

void _print_env(void)
{
	int i;

	for (i = 0; environ[i] != NULL; i++)
	{
		_putstring(environ[i]);
		_putchar('\n');
	}

}
