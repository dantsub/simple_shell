#include "holberton.h"
/**
  * prompt - interpreter.
  * @env: environment.
  */
void prompt(char **env)
{
	char *str, **av;
	size_t len;
	int flag = 1, get = 0;

	do {
		write(STDOUT_FILENO, "$ ", 2);
		get = getline(&str, &len, stdin);
		check_getline(get);
		check_exit(str);
		if (_strcmp(str, "\n"))
		{
			av = get_args(str);
			child(av, env);
		}

	} while (flag);
}
