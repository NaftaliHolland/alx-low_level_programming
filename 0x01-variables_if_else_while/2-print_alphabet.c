#include<stdio.h>
/**
 * main - entry point
 * Description:Generates all the letters of the alphabet
 * Return:Always (0)Success
 */
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
