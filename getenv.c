#include "shell.h"

char *_getenv(char *name)
{
	char *token;
	char *match;

	match = malloc(sizeof(char *));

	while (*environ)
	{
		token = strtok(*environ, "=");
		while (token)
		{
			if (strcmp(name, token) == 0)
			{
				token = strtok(NULL, "\0");
				match = strcpy(match, token);
		       	}

			token = strtok(NULL, "\0");
		}
		environ++;
	}

	return (match);
}
