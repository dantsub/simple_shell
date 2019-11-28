#include "holberton.h"
void verify_getline(char *str, int get)
{
	if (get == EOF)
	{
		write(STDOUT_FILENO, "\n", 1);
		free(str);
		exit (-1);
	}
	else if (!(_strcmp(str, "exit\n")))
	{
		free(str);
		exit (-1);
	}
}
char **verify_command(char **av, char **env)
{
	char **new = malloc(sizeof(char*));

	if (!new)
		return (NULL);

	if (av[0][0] == '/' || (av[0][0] == '.' &&
		av[0][1] == '/') || (av[0][0] == '.' && av[0][1] == '.'))
	{
		free(new);
		return (av);
	}

	*new = path(av, env);
	return (new);
}
