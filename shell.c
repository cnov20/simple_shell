#include "shell.h"

/**
 * main - function that takes in executable from command line and executes it
 *
 * Return: int - indicating success or failure
 */

int main (void)
{
	char **argv;
	char *line;

	_putstring(PROMPT);

	while (1)
	{
		line = read_line();

		argv = tokenizer(line);

		if (_strcmp(line, "exit") == 0)
		{
			free(line);
			free(argv);
		        exit(EXIT_SUCCESS);
		}

		if (_strcmp(line, "env") == 0)
		{
			_print_env();
		}

		execute_cmd(argv, line);

		_putstring(PROMPT);

		free(line);
		free(argv);

	}

	return (0);
}
