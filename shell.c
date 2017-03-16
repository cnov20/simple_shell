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

	_putstring(PROMPT);
	while (1)
	{
<<<<<<< HEAD
		if((read = getline(&line, &length, stdin)) == EOF)
		{
			free(line);
			return (-1);
		}
=======
		if((read = getline(&line, &length, stdin)) == -1)
		return (-1);

>>>>>>> b9b5693d0911d30925f2780087683ffecd240417
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
		{
			free (line);
			return (0);
		}
		if (_strcmp(line, "env") == 0)
		{
			free(line);
			_print_env();
		}
		execute_cmd(argv);
		free (argv);
		_putstring(PROMPT);
<<<<<<< HEAD
=======

>>>>>>> cd88cde139d1386e926362dab77158897c896bab
	}
	return (EXIT_SUCCESS);
}
