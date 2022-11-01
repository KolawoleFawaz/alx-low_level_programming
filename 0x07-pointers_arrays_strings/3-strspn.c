#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: pointer to string input
 * @accept: substring prefix to look for
 *
 * Return: the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int j, k, l;

	j = 0;
	while (s[j] != '\0')
	{
		k = 0;
		l = 1;
		while (accept[k] != '\0')
		{
			if (s[j] == accept[k])
			{
				l = 0;
				break;
			}
			k++;
		}
		if (l == 1)
			break;
		j++;
	}

	return (j);
}
