#include "holberton.h"
/**
 *_strcat - concatenates two strings.
 *@dest: The parameter
 *@src: the parameter
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int n, i;

	for (n = 0; dest[n] != '\0'; n++)
	{
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[n + i] = src[i];
	}
	dest[n + i] = '\0';

	return (dest);
}
/**
 * _strcpy - Entry point
 * Description: function
 * @dest: parametre to check
 * @src: parametre to check
 * Return: always dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		if ((src[i + 1] == '\0'))
			dest[i + 1] = src[i + 1];
		i++;
	}
	return (dest);
}
/**
 * _strcmp - Entry point
 * Description: function that cancatenates two strings
 * @s1: parametre to check
 * @s2: parametre to check
 *
 * Return: always r
 */
int _strcmp(char *s1, char *s2)
{
	int i, r;

	for (i = 0; s1[i] != '\0'; i++)
		if (s1[i] == s2[i])
			r = s1[i] - s2[i];
		else
		{
			r = s1[i] - s2[i];
			break;
		}
	return (r);
}
/**
 *_strlen - function return the lengh of a string
 *@s: the string
 *Return: length of a string
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
	{

	}
	return (c);
}
