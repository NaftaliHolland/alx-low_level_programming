#include "main.h"
/**
 * _isdigit - Entry point
 * Description:Checks for a digit
 * @c:Integer parameter
 * Return: 1 if true 0 if false
 */
int _isdigit(int c)
{
	char n = c;

	if (n >= '0' && n <= '9')
		return (1);
	else
		return (0);
}
