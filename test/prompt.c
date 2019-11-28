#include "holberton.h"
/**
  * prompt - The prompt.
  *
  *
  * Return: None
  */
void *prompt(char **env)
{
	char *str, **args;
	size_t len;
	int get;

	while (1)
	{
		write(STDOUT_FILENO, "$ ", 2);
		get = getline(&str, &len, stdin);
		args = get_args(str);
		process(args, env);
		verify_getline(str, get);
	}
}
