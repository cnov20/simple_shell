#include "shell.h"

extern char **environ;

char *_getenv_PATH(const char *name)
{
	char *token;
	char *match;
	char *directory_path;

	match = malloc(sizeof(*name));

	while (*environ)
	{
		token = strtok(*environ, "=");

		while (token)
		{
			if (strcmp(name, token) == 0)
			{
				token = strtok(NULL, "\0");
				match = strcpy(match, token);
				directory_path = strtok(match, ":");

				while (directory_path != NULL)
				{
				       	printf("%s\n", directory_path);
					directory_path = strtok(NULL, ":");
				}
			}
			token = strtok(NULL, ":");
		}
		environ++;
	}
	return (directory_path);
}


int main (void)
{
	_getenv_PATH("PATH");

	return (0);
}
