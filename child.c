#include "holberton.h"
/**
  * child - child process.
  * @av: arguments.
  * @env: environment.
  * Return: nothing.
  */
void child(char **av, char **env)
{
	char *str;
	int *status = NULL;
	struct stat check;
	pid_t child;

	child = fork();
	if (!child)
	{
		str = av[0];

		if (stat(av[0], &check))
			str = check_paths(av, env);
		if (execve(str, av, env) == -1)
			perror("Error");
	}
	if (child > 0)
	{
		wait(status);
		if (!(isatty(STDIN_FILENO)))
			exit(1);
	}
}
