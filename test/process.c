#include "holberton.h"
void process(char **av, char **env)
{
	char **path;

	path = verify_command(av, env);
	if (path)
		child(path, av, env);
}
int child(char **path, char **av, char **env)
{
	int status;
	pid_t child;

	child = fork();
	if (!child)
	{
		if (execve(path[0], av, env) == -1)
		{
			free(path);
			exit(-1);
		}
	}
	else
	{
		wait(&status);
		if (!isatty(STDIN_FILENO))
		{
			free(path);
			return (-1);
		}
	}
	return (0);
}

