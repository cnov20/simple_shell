#include "shell.h"

char *_getenv(char *name)
{
	char *token;
	char *match;
	char *env_copy;

	while (*environ)
	{
		env_copy = *environ;
		token = strtok(env_copy, "=");

		if (token)
		{
			if (_strcmp(name, token) == 0)
			{
				token = strtok(NULL, "\0");
				match = _strdup(token);
				return (match);
		       	}
		}

		environ++;
	}

	return (NULL);
}
