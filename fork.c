#include "shell.h"
/**
 * process - Creates new processees.
 * @args: the command and its arguments.
 * Return: 1 in success and 0 in failure.
 */
int process(char **args)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == 0)
		exit(EXIT_FAILURE);
	else
	{
		do {
			waitpid(pid, &status, 5);
		} while(!WIFEXITED(status) && !WIFSIGNALED(status))
	}
	return (-1);
}
