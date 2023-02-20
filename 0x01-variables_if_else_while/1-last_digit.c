#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description:Prints the last digit of the last digit
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int u;

	u = n % 10;
	if (u > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, u);
	else if (u < 5)
		printf("last digit of %d is %d and is less than 5\n", n, u);
	else if (u == 0)
		printf("Last digit of %d is %d and is 0\n", n, u);
	return (0);
}
