#include<stdio.h>
/**
 * main- Entry point
 * Description:Prints the first 50 fibonacci numbers
 * Return:int
 */
int main(void)
{
	int count;
	long int a = 1, b = 2, next;

	printf("%ld, %ld, ", a, b);
	for (count = 2; count < 99; count++)
	{
		next = a + b;
		a = b;
		b = next;
		if (count != 98)
		printf("%ld, ", next);
		else
		printf("%ld", next);
	}
	printf("\n");
	return (0);
}
