#include<stdio.h>
/**
 * main - Entry point
 * Description:Prints numbers
 * Return: Always 0
 */
int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num != '9')
		{
			putchar(num);
			putchar(',');
			putchar(' ');
		}
		else
			putchar(num);
	}
	return (0);
}
