int process(char **av, char **env)
{
	int status;
	char **path;

	status = 0;
	path = verify_command(av);
	if (path)
	{
		status = child(path, av, env);
	}
	return (status);
}
int child(char **path, char **av, char **env)
{
	int status;
	pid_t child;

	child = fork();
	if (!child)
	{
		if (execv(path, av, env) == -1)
			return (-1);
	}
	else
	{
		wait(&status);
		if (WEXITSTATUS(status))
			return (WEXITSTATUS(status));
	}
}

