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
	{
		if (execvp(args[0], args) == -1)
		{
			perror("Error in forking");
		}
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		perror("Error in forking");
	}
	else
	{
		do {
			waitpid(pid, &status, 5);
		} while(!WIFEXITED(status) && !WIFSIGNALED(status));
	}
	return (-1);
}
