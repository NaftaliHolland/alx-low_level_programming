#include <stdio.h>
/**
 * main - Entry point
 * Description:prints sll the arguments it recieves
 * @argc:Input
 * @argv:Input
 * Return:Int
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
