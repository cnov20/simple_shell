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

//	int status = 1;

	_putstring(PROMPT);

	while (1)
	{
		line = read_line();

		argv = tokenizer(line);

		if (_strcmp(line, "exit") == 0)
		{
			return (0);
		}

		execute_cmd(argv, line);

		_putstring(PROMPT);

		free(line);
		free(argv);
	}

	return (0);
}
