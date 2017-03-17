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
	int  tok_len = 0;
	int i;

	for (i = 0; line[i]; i++)
	{
		if(line[i] == ' ' || line[i] == '\n')
			tok_len++;
	}
	tok_len++;

	argv = malloc(sizeof(char *) * tok_len);

	if(!argv)
	{
		perror("Error: Memory Allocation Failed");
		return (NULL);
	}

	token = strtok(line, " \n");

	i = 0;
	while (token)
	{
		argv[i] = token;
		token = strtok(NULL, " \n");
		i++;
	}

       	argv[i] = NULL; /* set last element to null */

	return (argv);
}
