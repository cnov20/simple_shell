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

	while (value)
	{
		full_path = build_path(*tokens, value);

		if (stat(full_path, &buffer) == 0)
		{
			*tokens = full_path;
			free(path);
			return (0);
		}

		value = strtok(NULL, ":");
		free(full_path);
	}

		free(path);

	return (1);
}
