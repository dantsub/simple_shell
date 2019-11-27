#include "holberton.h"
/**
 * get_args - find the name in the environment.
 * @str: string.
 *
 * Return: array of pointer or NULL.
 */
char **get_args(char *str)
{
	int len = 0, index = 0;
	char **av, *tok;

	while (str[index])
	{
		if (str[index] == 32)
			len++;
		index++;
	}
	index = 0;
	av = malloc(len + 1 * sizeof(char *));
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
