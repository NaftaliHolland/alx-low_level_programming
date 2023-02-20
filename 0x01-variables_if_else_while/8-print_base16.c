#include<stdio.h>
/**
 * main - Entry point
 * Description: prints all numbers to basse 16
 * Return: Always 0 (success)
 */
int main(void)
{
	char  n;

	for (n = 'a'; n <= 'f'; n++)
	{
		if (n < 'f')
		putchar(n - '0');
		putchar(n);
	}
	putchar('\n');
	return (0);
}
