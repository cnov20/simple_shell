#include "shell.h"

/**
 * path_command - function searches PATH environment variable
 * for the appropriate command executed by user
 * @argv: commands input by user
 *
 * Return: 0 - SUCCESS / 1 - FAILURE
 */

int path_command(char **argv)
{
	char *directory;
	char *command;
	char *full_path;

	directory = _getenv("PATH");
	command = strtok(directory, ":");

	while (command != NULL)
	{
		full_path = path_builder(*argv, command);

		if(access(argv[0], X_OK) == 0)
		{
			*argv = _strdup(full_path);
			return (EXIT_SUCCESS);
		}

		command = strtok(NULL, ":");
	}
//	free(directory);
	return(EXIT_FAILURE);
}
