#include "shell.h"

char *path_builder(char *command, char *directory)
{

	char *full_path;
	size_t cmd_size;

	cmd_size = _strlen(command) + _strlen(directory) + 2;
	full_path = malloc(sizeof(cmd_size));

	if (!full_path)
	{
		perror("Error: command not found");
		return (NULL);
	}

	_memset(full_path, 0, cmd_size);

	full_path = _strcat(full_path, directory);
	full_path = _strcat(full_path, "/");
	full_path = _strcat(full_path, command);

//	free(full_path);
	return (full_path);
}
