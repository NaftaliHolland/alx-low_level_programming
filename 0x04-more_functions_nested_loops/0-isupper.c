#include "main.h"
/**
 * _isuper - Entry point
 * Description:Checks whether a character is upercase
 * @c:Integer it takes as input
 * Return:1 if true 0 if false
 */
int _isupper(int c)
{
	char u = c + '0';

	if (u < 'A' || c > 'Z')
	return (1);
	else
	return (0);
}
