#include "shell.h"

int get_path(char **tokens)
{
	char *value;
	char *path;
	char *full_path;
	struct stat buffer;

	/* get value of PATH variable */
	path = _getenv("PATH");

	/* parse value of PATH variable */
	value = strtok(path, ":");

<<<<<<< HEAD
	while (value)
	{
		full_path = build_path(*tokens, value);

		if (stat(full_path, &buffer) == 0)
=======

	while (value)
	{
		full_path = build_path(path, value);

		if (stat(full_path, &buffer) == 0)
		{
			*tokens = _strdup(full_path);
			free(full_path);
			free(path);
			return (0);
		}
		else
>>>>>>> c87408e057bed45b3c1e666ad1764f9851b400cc
		{
			*tokens = full_path;
			free(path);
			return (0);
		}

<<<<<<< HEAD
		value = strtok(NULL, ":");
		free(full_path);
	}

		free(path);
=======
		free(full_path);
		value = strtok(NULL, ":");
	}

	free(path);
>>>>>>> c87408e057bed45b3c1e666ad1764f9851b400cc

	return (1);
}
