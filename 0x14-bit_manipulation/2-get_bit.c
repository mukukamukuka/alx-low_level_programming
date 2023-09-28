#include "main.h"


/**
 * powX-powers a number b to the p's power
 * @b: base
 * @c : power
 * Return: return b to the power of a
 */
unsigned long int powX(int b, int c)
{
	unsigned long int ans = 1;

	while (c)
	{
		ans *= b;
		c--;
	}
	return (ans);
}

/**
 * get_bit - returns the value at an index
 * @i: input unsigned long
 * @index: index to return
 * Return: value at input index
 */
int get_bit(unsigned long int i, unsigned int index)
{
	unsigned long int test;

	if (index > sizeof(i) * BIT_SIZE - 1)
		return (-1);


	test = powX(2, index);
	if (test & i)
		return (1);
	else
		return (0);
}
