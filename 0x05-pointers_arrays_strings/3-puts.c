#include "main.h"
/**
 * _puts - Entry point
 * Description: prints a string and a new line
 * @str: pointer to the string to be printed
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
