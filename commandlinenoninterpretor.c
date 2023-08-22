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
		free(args);
		if (stat >= 0)
			exits(stat);
	} while (stat == -1)
}
