#include<stdio.h>
#include<unistd.h>
/**
 * main - Entry point
 * Description:Prints posible combinations of two digit numbers
 * Return:int
 */
int main(void)
{
	int c, i;

	for (c = '0'; i <= '9'; c++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (c < i)
			{
				putchar(c);
				putchar(i);

				if (c != '8' || (c == '8' && i != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
