#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char **environ;

char *_getenv(const char *name)
{
	char *token;
	char *match;

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
		       	}

			token = strtok(NULL, "\0");
		}
		environ++;
	}

	return (match);
}
