#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the number of coins that can be returned as change
 *
 * @argc:Number of arguments passed to main
 * @argv:Pointer to an array of strings passed to main
 *
 * Return: Number of coins
 *
 */

int main(int argc, char **argv)
{
	int i = 0;
	int number_of_coins = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int num = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (num <= 0)
	{
		printf("0\n");
		return (1);
	}

	for (; i < 5; i++)
	{
		number_of_coins += (num / coins[i]);
		num %= coins[i];
	}

	printf("%d\n", number_of_coins);

	return (0);
}
