#include<stdio.h>
/**
 * main - Entry point
 * Description: prints all numbers to basse 16
 * Return: Always 0 (success)
 */
int main(void)
{
	char n;
	char h;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (h = 'a'; h <= 'f'; h++)
	{
		putchar(h);
	}
	putchar('\n');
	return (0);
}
