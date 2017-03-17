#include "shell.h"

/**
 * read_line - function that uses getline() to accept user input
 *
 * Return: line from user passed from stdin
 */

char *read_line(void)
{
	char *line;
	size_t length;

	length = 0;
	line = NULL;
	if (getline(&line, &length, stdin) == -1)
	{
		_putstring("\n[Exiting]\n");
		free(line);
		exit(EXIT_SUCCESS);
	}

	return (line);
}
