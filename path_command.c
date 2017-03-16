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
	char *directory_path;
	char *command;
	char *full_path;

	directory_path = _getenv("PATH");
	command = strtok(directory_path, ":");

	while (command != NULL)
	{
		full_path = path_builder(*argv, command);
		if(access(argv[0], X_OK) == 0)
		{
			*argv = _strdup(full_path);
			//return (EXIT_SUCCESS);
		}

		command = strtok(NULL, ":");
	}
//	free(directory_path);
	return(EXIT_FAILURE);
}
