#include "shell.h"
/**
 * spilt - Tokenize the command.
 * @cmd: the command.
 * Return: the tokens.
 */
char **spilt(char *cmd)
{
	char *token;
	size_t size = 64;
	char **tokens = malloc(sizeof(char *) * size);
	int i = 0;

	if (tokens == NULL)
		exit(EXIT_FAILURE);
	token = strtok(cmd, " ");
	while (token != NULL)
	{
		if (token[0] == '#')
			break;
		tokens[i] = token;
		i++;
		if (i >= size)
		{
			size += size;
			tokens = realloc(tokens, sizeof(char *) * size);
			if (tokens == NULL)
				exit(EXIT_FAILURE);
		}
		token = strtok(NULL, " ");
	}
	tokens[i] = NULL;
	return (tokens);
}
