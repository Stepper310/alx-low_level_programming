#include "main.h"

/**
 * set_bit - sets bit value of  a specified  index to 1
 * @n: pointer to number that will change
 * @index: bit index set to 0
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

