#include<stdio.h>
/**
 * main- Entry point
 * Description:Prints the first 50 fibonacci numbers
 * Return:int
 */
int main(void)
{
	int count, a = 1, b = 2, next;

	printf("%d, %d, ", a, b);
	for (count = 2; count <= 50; count++)
	{
		next = a + b;
		a = b;
		b = next;
		if (count != 50)
		printf("%d, ", next);
		else
		printf("%d", next);
	}
	printf("\n");
	return (0);
}
