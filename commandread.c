#include "shell.h"
/**
 * commandline - Reading the command.
 * Return: the commmand line.
 */
char *commandline(void)
{
	char *cmd;
	size_t size = 0;

	if (getline(&cmd, &size, stdin) == -1)
	{
		if (feof(stdin))
		{
			free(cmd);
			exit(EXIT_SUCCESS);
		}
		else
		{
			free(cmd);
			perror("Invalid Command");
			exit(EXIT_FAILURE);
		}
	}
	return (cmd);
}
