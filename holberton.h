#ifndef _HOLBERTON_
#define _HOLBERTON_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/stat.h>

char **prompt(void);
char **get_args(char *str);
void child(char **av, char **env);
void control(int signal);
char *_getenv(char *name, char **env);
char *check_paths(char **av, char **env);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
#endif
