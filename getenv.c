#include "shell.h"

char *_getenv(char *name)
{
	char *token;
	char *match;
<<<<<<< HEAD
	char *env_copy;
=======

	match = malloc(sizeof(char *));
>>>>>>> c87408e057bed45b3c1e666ad1764f9851b400cc

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
