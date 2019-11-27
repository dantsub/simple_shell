#include "holberton.h"
/**
 * main - main function.
 * @ac: count args.
 * @av: value args.
 * @env: enviroment.
 * Return: 0.
 */
int main(int ac, char **av, char **env)
{
	(void)ac;
	(void)av;

	signal(SIGINT, control);
	prompt(env);
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
