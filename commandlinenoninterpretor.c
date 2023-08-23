#include "shell.h"
/**
 * commandnoninter - Executes the command interpretor in
 * non-interactive mode.
 * Return: nothing.
 */
void commandnoninter(void)
{
	char *cmd;
	char **args;
	int stat = -1;

	do {
		cmd = commandline();
		args = spilt(cmd);
		stat = runcommand(args);
		free(cmd);
		if (stat >= 0)
			exits(args);
		free(args);
	} while (stat == -1);
}
