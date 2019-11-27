#include "holberton.h"
/**
  * check_getline - verify is getline is EOF and the program ends.
  * @get: interger.
  */
void check_getline(int get)
{
	if (get == EOF)
	{
		write(STDOUT_FILENO, "\n", 1);
		exit(98);
	}
}
/**
  * check_exit - verify is str is exit and the program ends.
  * @str: string.
  */
void check_exit(char *str)
{
	if (!_strcmp(str, "exit\n"))
		exit(98);
}
