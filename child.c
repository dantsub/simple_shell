#include "holberton.h"
/**
  * child - child process.
  * @av: arguments.
  * @env: environment.
  * Return: nothing.
  */
void child(char **av, char **env)
{
	char *str = NULL;
	int *status = NULL;
	pid_t child;

	if (!verify_command(av))
		str = check_paths(av, env);
	child = fork();
	if (!child)
	{
		if (str)
			execve(str, av, env);
		else
		{
			free(str);
			execve(av[0], av, env);
		}

	}
	else
	{
		wait(status);
		if (!(isatty(STDIN_FILENO)))
			_exit(0);
	}
}
