#include "shell.h"

/**
 * get_path - function that finds the appropriate path for user command - stdin
 * @tokens: array of tokenized strings
 *
 * Return: 0 - SUCCESS - 1 - FAILURE
 */

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
			return (0);
		}

		free(full_path);
		value = strtok(NULL, ":");
	}

	return (1);
}
