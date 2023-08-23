#include "shell.h"
/**
 * commandinter - Executes the command line interpretor
 * in interactive.
 * Return: nothing.
 */
void commandinter(void)
{
	char *cmd;
	char **args;
	int status = -1;

	do {
		printf("#cisfun$ ");
		cmd = commandline();
		args = spilt(cmd);
		status = runcommand(args);
		free(cmd);
		if (status >= 0)
			exits(args);
		free(args);
	} while (status == -1);
}
