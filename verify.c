void verify_getline(char *str, int get, int status)
{
	(void)status;

	if (get == EOF)
	{
		write(STDOUT_FILENO, "\n", 1);
		free(str);
		return (0);
	}
	if (!(_strcmp(str, "exit\n")))
	{
		free(str);
		return (0);
	}
}
char **verify_command(char **av, char **env)
{

	if (av[0][0] == "/" || (av[0][0] == "." &&
		av[0][1] == "/") || (av[0][0] == "." && av[0][1] == "."))
		return (av);
	else
		return (path(av, env));
}
