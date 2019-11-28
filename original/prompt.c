#include "holberton.h"
/**
  * prompt - The prompt.
  *
  *
  * Return: The arguments or NULL.
  */
char *prompt(void)
{
	char *str = NULL;
	size_t size = 0;
	int get = 0;

	write(STDOUT_FILENO, "$ ", 2);
	get = getline(&str, &size, stdin);

	if (get == EOF)
	{
		write(STDOUT_FILENO, "\n", 1);
		free(str);
		exit(1);
	}
	if (!(_strcmp(str, "exit\n")))
	{
		free(str);
		exit(1);
	}
	return (str);
}
