#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - entry point
 * Description: Prints if the random number generated is positive or negative
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("is negative\n");
	else if (n == 0)
		printf("is zero\n");
	else if (n > 0)
		printf("is positive\n");
	return (0);
}
