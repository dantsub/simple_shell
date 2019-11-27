#include "holberton.h"
/**
  * check_paths - check if exist the command in the PATH.
  * @av: arguments.
  * @env: environment.
  * Return: PATH concatenate with command or NULL.
  */
char *check_paths(char **av, char **env)
{
	char *path, *tok, *valEnv = _getenv("PATH", env);
	int size = 0;
	struct stat check;

	if (!valEnv)
		return (NULL);

	tok = strtok(valEnv, ":");

	while (tok)
	{
		size = (_strlen(tok) + _strlen(av[0]) + 1);
		path = malloc(sizeof(char *) * size);

		if (!path)
			return (NULL);
		_strcpy(path, tok);
		_strcat(path, "/");
		_strcat(path, av[0]);
		if (!(stat(path, &check)))
			return (path);

		tok = strtok(NULL, ":");
		free(path);

	}
	return (NULL);
}
