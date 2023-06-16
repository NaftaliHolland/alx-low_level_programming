#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array and inititlizes to 0
 *
 * @nmemb: Number of elements to be stored in the array
 * @size: Size of each element to be stored in the array
 *
 * Return: Pointer to the crated array
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	int i = 0;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);

	while (nmemb)
	{
		arr = (char *)array;
		arr[i] = 0;
		i++;
		nmemb--;
	}

	return (array);

}
