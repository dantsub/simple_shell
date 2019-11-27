#include "holberton.h"
/**
  * verify_command - verify if the command comes with path or not.
  * @av: values args.
  * @env: environment.
  */
void verify_command(char **av, char **env)
{
	struct stat check;
	(void)env;

	if (!stat(av[0], &check))
	{
		printf("Correct!\n");
	}
	else
		printf("Incorrect :(\n");
	if (!access(av[0], F_OK | X_OK))
		printf("Pass the access\n");
}
/**
  *
  *
  *
  *
  */
void child(char **av, char **env)
{
	struct stat check;
	int *status = NULL;
	pid_t child;

	if (!stat(av[0], &check))
	{
		child = fork();
		if (!child)
		{
			if (execve(av[0], av, env) == -1)
			{
				perror("hsh");
				exit(98);
			}
		}
		if (child > 0)
		{
			wait(status);
			if (!(isatty(STDIN_FILENO)))
				_exit(1);
		}
	}
	else
	{
		write(STDOUT_FILENO, "hsh: No such file or directory\n", 32);
	}
}
