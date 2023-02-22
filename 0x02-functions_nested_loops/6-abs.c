#include "main.h"
/**
 * _abs - Entry  point
 * @n:Integer it accepts as input
 * Return:Integer
 */
int _abs(int n)
{
	int abs = n;

	if (abs < 0)
		return (abs * -1);
	else if (abs >= 0)
		return (abs);
}
