#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>

char *commandline(void);
int runcommand(char **args);
char **spilt(char *cmd);
int process(char **args);
void commandinter(void);
int exits(char **args);
void commandnoninter(void);

#endif
