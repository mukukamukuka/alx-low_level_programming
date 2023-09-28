#include "main.h"

#define  BIT_SIZE 8
/**
 * powX - powers a number b to the p's power
 * @b: base
 * @c: power
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
 * clear_bit - sets bit to zero at index index
 * @i: input integer
 * @index: returns the value of a bit at a given index
 * Return: 1 for ssucess -1 for failure
 */
int clear_bit(unsigned long int *i, unsigned int index)
{
	unsigned long int test;

	if (index > sizeof(i) * BIT_SIZE - 1)
		return (-1);

	test = powX(2, index);
	*i = (*i & test) ? *i ^ test : *i;
	return (1);

}
