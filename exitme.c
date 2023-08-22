#include "shell.h"
/**
 * exits - Exits the command line.
 * @args: The command's arguments.
 * Return: 0.
 */
int exits(char **args)
{
	if (args[1])
		return (atoi(args[1]));
	else
		return (0);
}
