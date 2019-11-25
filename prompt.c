#include "holberton.h"
/**
  * prompt - The prompt.
  *
  *
  * Return: The arguments or NULL.
  */
char **prompt(void)
{
	char **av, *str;
	size_t size;
	int get;

	do {
		write(STDOUT_FILENO, "$ ", 2);
		get = getline(&str, &size, stdin);

		if (get == EOF)
		{
			write(STDOUT_FILENO, "\n", 1);
			exit(1);
		}
		if (!(_strcmp(str, "exit\n")))
			exit(1);
	} while (get == 1);
	av = get_args(str);
	if (!av)
		return (NULL);
	return (av);
}
