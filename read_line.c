#include "shell.h"

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
<<<<<<< HEAD
=======

>>>>>>> c87408e057bed45b3c1e666ad1764f9851b400cc
	}

	return (line);
}
