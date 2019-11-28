char **path(char **path, char **env)
{
	char **paths, *en = _getenv("PATH", env);
	int size = 0;
	struct stat check;

	if (!en)
		return (NULL);

	tok = strtok(en, ":");
	while (tok)
	{
		size(_strlen(tok) + _strlen(path[0]) + 1);
		paths = malloc(sizeof(char*) * size);
		if (!paths)
			return (NULL);
		_strcpy(paths, tok);
		_strcat(paths, "/");
		_strcat(paths, path[0]);
		tok = strtok(NULL, ":");
		if (!stat(paths, &check))
			return (paths);
		free(paths);
	}
	return (NULL);
}
