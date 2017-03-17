#include "shell.h"

/**
 * build_path - function appends token to end of appropriate path
 * @token: tokenized command entered from stdin by user
 * @value: value of PATH variable needed for token
 *
 * Return: Full command_path to find executable program
 */

char *build_path(char *token, char *value)
{
	char *command_path;
	size_t command_len;

	command_len = _strlen(value) + _strlen(token) + 2;
	command_path = malloc(sizeof(char) * command_len);

	if (command_path == NULL)
	{
		return (NULL);
	}

	_memset(command_path, 0, command_len);

	command_path = _strcat(command_path, value);
	command_path = _strcat(command_path, "/");
	command_path = _strcat(command_path, token);

	return (command_path);
}
