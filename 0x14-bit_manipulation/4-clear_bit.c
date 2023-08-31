#include "main.h"

/**
 * clear_bit - bit value is set as 0
 * @n: pointer to number to make change
 * @index: bit index to be cleared
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

