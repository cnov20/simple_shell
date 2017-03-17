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

	_putstring(PROMPT);

	while (1)
	{
		line = read_line();

/*		if (strcmp(line, "\n") == 0)
		{
			_putstring(PROMPT);
			continue;
		}
*/
		argv = tokenizer(line);

		execute_cmd(argv, line);

		_putstring(PROMPT);

		free(line);
		free (argv);
	}

	return (0);
}
