#include<stdio.h>
/**
 * main - Entry point
 * Description: prints alphabet in lowercase then uppercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char  n;
	char h;

	for (n = 'a'; n <= 'f'; n++)
	{
		if (n < 'f')
		putchar(n - '0');
		putchar(n);
	}
	putchar('\n');
	return (0);
}
