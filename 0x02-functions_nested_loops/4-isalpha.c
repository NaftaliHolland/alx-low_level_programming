#include "main.h"
/**
 * _isalpha - Entry point
 * Description: checks is a character is an alphabet
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false.
 */
int _isalpha(int c)
{
	char al = c;

	if ((al >= 'A' && al <= 'Z') || (al >= 'a' && al <= 'z'))
		return (1);
	else
		return (0);
}
