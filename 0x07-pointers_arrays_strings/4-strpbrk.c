#include "main.h"

/**
 * _strpbrk - function that searches for a string for any sort of bytes
 *
 * @s: pointer to input string
 * @accept: pointer to string being search for in @s
 *
 * Return: pointer to the bytes in @s or Null if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return ('\0');
}
