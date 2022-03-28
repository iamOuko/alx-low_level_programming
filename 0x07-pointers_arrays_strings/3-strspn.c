#include "main.h"

/**
 * _strspn - return length of string that c values consistently
 * @s: string to search
 * @accept: target c
 * Return: number of bytes consecutively matched
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	int c = 0;

	while (s[i] != '\0')
	{

		for (j = 0; accept[j] != '\0'; j++) 
		{
			if (s[i] == accept[j]) 
			{
				c++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (c);
		}
		i++;
	}
	return (c); 

}
