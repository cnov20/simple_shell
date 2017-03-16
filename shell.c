#include "shell.h"

/**
 * main - function that takes in executable from command line and executes it
 *
 * Return: int - indicating success or failure
 */

int main(void)
{
	char **argv;
	char *line = NULL;
	size_t length = 0;
	ssize_t read;
//	unsigned int i = 0;

	_putstring(PROMPT);
	while (1)
	{
		if((read = getline(&line, &length, stdin)) == -1)
			return (-1);

/*		if (!line)
		{
			_putstring("No line\n");
			_putstring(PROMPT);
		}
*/
		if (_strcmp(line, "\n") == 0)
		{
			_putstring(PROMPT);
			continue;
		}

		argv = tokenizer(line);

		if (_strcmp(line, "exit") == 0)
			return (0);

		if (_strcmp(line, "env") == 0)
		     	_print_env();

		execute_cmd(argv);

		free(argv);

		_putstring(PROMPT);

	}
	return (EXIT_SUCCESS);
}
