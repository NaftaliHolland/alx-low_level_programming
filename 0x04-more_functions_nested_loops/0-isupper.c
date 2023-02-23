#include "main.h"
/**
 * _isupper - Entry point
 * Description:Checks whether a character is upercase
 * @c:Integer it takes as input
 * Return:1 if true 0 if false
 */
int _isupper(int c)
{
	char u = c;

	if (u < 'A' || c > 'Z')
	return (0);
	else
	return (1);
}
