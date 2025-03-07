#include "main.h"

/**
 * _pow_recursion - returns the value of x raise by y
 * @x: number
 * @y: power
 * Return: returns x by the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);

	return (x * (_pow_recursion(x, y - 1)));
}
