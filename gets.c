#include "holberton.h"
/**
  * _getenv - find the name in the environment.
  * @name: name to find.
  * @env: environment.
  * Return: name or NULL.
  */
char *_getenv(char *name, char **env)
{
	int index = 0;
	char *valEnv = env[index], *nameEnv = strtok(valEnv, "=");

	while (_strcmp(name, nameEnv) && nameEnv && env[index])
	{
		valEnv = env[index++];
		nameEnv = strtok(valEnv, "=");
	}
	nameEnv = strtok(NULL, "\n");

	if (env[index] == 0)
		return (NULL);
	return (nameEnv);
}
/**
  * get_args - get the arguments.
  * @str: string from getline.
  *
  * Return: array of pointer or NULL.
  */
char **get_args(char *str)
{
	int len = 0, index = 0;
	char **av, *tok;

	while (str[index])
	{
		if (str[index] == 32 || str[index] == 9 || str[index] == 10)
			len++;
		index++;
	}
	index = 0;
	av = malloc((len + 2) * sizeof(char *));
	if (!av)
		return (NULL);
	tok = strtok(str, "\t\n\r ");
	while (tok)
	{
		av[index++] = tok;
		tok = strtok(NULL, "\t\n\r ");
	}
	av[index] = NULL;
	return (av);
}
