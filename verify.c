#include "holberton.h"
/**
 * verify_command - check command.
 * @av: values args.
 *
 * Return: args.
 */
char **verify_command(char **av)
{
	if (av[0][0] == '/' || (av[0][0] == '.' &&
				av[0][1] == '/') || (av[0][0] == '.' && av[0][1] == '.'))
		return (av);
	return (NULL);
}
