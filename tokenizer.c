#include "shell.h"

/**
 * tokenizer - function that takes a given string, tokenizes it via delimiter
 * @line: string to be tokenized
 *
 * Return: array of tokens
 */

char **tokenizer(char *line)
{
	char **argv;
	char *token;
	size_t tok_len = 0;
	unsigned int i;

	if (!line)
		return (NULL);

	for (i = 0; line[i]; i++)
	{
		if(line[i] == '\n' || line[i] == ' ')
			tok_len++;
	}
	tok_len++;

	argv = malloc(sizeof(char *) * tok_len);

	if(!argv)
	{
		perror("Error: Memory Allocation Failed");
		return (NULL);
	}

	token = strtok(line, DELIMITER);

	i = 0;
	while (token != NULL)
	{
		argv[i] = token;
		token = strtok(NULL, DELIMITER);
		i++;
	}
       	argv[i] = NULL; /* set last element to null */
	return (argv);
}
