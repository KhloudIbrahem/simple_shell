#include "shell.h"
/**
 * runcommand - Runs the commands.
 * @args: the command and its arguments.
 * Return: 1 in success and 0 in failure.
 */
int runcommand(char **args)
{
	char *commands[] = {
		"cd",
		"env",
		"exit"
	};
	int (*runcommands[])(char **) = {
		&cd,
		&env,
		&exit
	};
	unsigned int i = 0;

	if (args[0] == NULL)
		return (-1);
	for (; i < sizeof(commands) / sizeof(char *); i++)
	{
		if (strcmp(args[0], commands[i]) == 0)
			return ((*runcommands[i])(args));
	}
	return (process(args));
}
