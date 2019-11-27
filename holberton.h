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

void prompt(char **env);
void control(int signal);
void check_getline(int get);
void check_exit(char *str);
char **get_args(char *str);
void verify_command(char **av, char **env);
void child(char **av, char **env);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);

#endif
