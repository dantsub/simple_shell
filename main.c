#include "holberton.h"
/**
  * main - main.
  * @ac: arg count.
  * @av: arg value.
  * @env: environment.
  * Return: 0 is success.
  */
int main(int ac, char **av, char **env)
{
	int flag = 1;
	char **args = NULL, *str = NULL;
	(void)ac;
	(void)av;

	signal(SIGINT, control);

	while (flag)
	{
		str = prompt();
		if (!str)
			break;
		if (_strcmp(str, "\n"))
		{
			args = get_args(str);
			child(args, env);
		}
	}
	return (0);
}
/**
  * control - function for Ctrl + C
  * @signal: int.
  * Return: nothing.
  */
void control(int signal)
{
	(void)signal;
	write(STDOUT_FILENO, "\n", 1);
	write(STDOUT_FILENO, "$ ", 2);
}
