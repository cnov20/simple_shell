#include "shell.h"

char *get_path(char *token)
{
//	char *token;
	char *value;
	char *path;
	char *full_path;

	/* get value of PATH variable */
	value = _getenv("PATH");

	/* parse value of PATH variable */
	path = strtok(value, ":");

	printf("%s\n", path);
	getchar();

	full_path = build_path(value, token);

	printf("%s\n", full_path);
	getchar();

	while (path)
	{
		if (access(full_path, X_OK) == 0)		{
			return (full_path);
		}
		else
		{
			perror("Error: Path Not Found");
		}

		path = strtok(NULL, ":");
	}

	return (token);
}
