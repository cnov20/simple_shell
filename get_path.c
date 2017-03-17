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
		full_path = build_path(path, value);

		if (stat(full_path, &buffer) == 0)
		{
			*tokens = _strdup(full_path);
			free(full_path);
			free(path);
			return (0);
		}
		else
		{
			perror("Error: Path Not Found");
		}

		free(full_path);
		value = strtok(NULL, ":");
	}

	free(path);

	return (1);
}
