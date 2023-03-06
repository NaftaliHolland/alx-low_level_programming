#include "main.h"
/**
 * _strspn - Entry point
 * Description: Number of ocurrences
 * @s:Input
 * @accept:Input
 * Return:unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;

	for (i = 0; accept[i] != ' '; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				count ++;
			}
		}
	}
	return(count);
}
