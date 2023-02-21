/**
 * _islower - Entry point
 * Description:Checks for lowercase characters
 * @c:the integer value it recieves
 * Return: int
 */
#include "main.h"
int _islower(int c)
{
	char al = c;

	if (al < 'a')
		return (0);
	else
		return (1);
}
