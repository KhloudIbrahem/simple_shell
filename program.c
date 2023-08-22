#include "shell.h"
/**
 * main - Entry point.
 * Return: always 0.
 */
int main(void)
{
	if (isatty(STDIN_FILENO) == 1)
		commandinter();
	else
		commandnoninter();
	return (0);
}
