#include "shell.h"

/**
 * execute_cmd - function forks child process, if command is executable
 * @argv: double pointer to tokenized line - from stdin
 * @line: line from user via stdin
 *
 * Return: 0 - SUCCESS / 1 - FAILURE
 */

int execute_cmd(char **argv, char *line)
{
	pid_t pid;
	int status;

	if (*argv == NULL)
		return (1);

	pid = fork();

	if (pid == -1)
	{
		perror("Error\n");
		return (1);
	}

	if (pid == 0)
	{
		if (_strncmp(*argv, "./", 2) != 0)
		{
			get_path(argv);
		}

		if (execve(*argv, argv, environ) == -1)
		{
			perror(*argv);
			free(line);
			free(argv);
			exit(EXIT_FAILURE);
		}

		return (EXIT_SUCCESS);
	}

	wait(&status);

	return (1);
}
