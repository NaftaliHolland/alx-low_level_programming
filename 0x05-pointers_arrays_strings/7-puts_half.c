#include "main.h"
/**
 * puts_half - Entry point
 * Description:Prints second half of string
 * @str:input
 * Return:void
 */
void putd_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
