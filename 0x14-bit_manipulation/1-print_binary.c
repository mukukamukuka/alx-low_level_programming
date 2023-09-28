#include "main.h"

#define BIT_SIZE 8

/**
 * powX - powers a number b to the p's power
 * @b : base
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
 * print_binary - prints the binary representation of a number
 * @i: input integer
 */
void print_binary(unsigned long int i)
{
	unsigned long int test = powX(2, sizeof(unsigned long int) * BIT_SIZE - 1);
	int start = 0;

	if (i == 0)
	{
		_putchar('0');
		return;
	}
	while (test)
	{
		if (!(test & i) && start)
		{
			_putchar('0');
		}
		else if (test & i)
		{
			_putchar('1');
			start = 1;
		}
		test = test >> 1;
	}

}
