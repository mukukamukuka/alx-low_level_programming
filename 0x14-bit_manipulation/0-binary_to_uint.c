#include "main.h"

/**
 * powX - raises b to p
 * @c: base
 * @p: power
 * Return: c the power of p
 */
int powX(int c, int p)
{
	int prod = 1;

	while (p > 0)
	{
		prod *= c;
		p--;
	}
	return (prod);
}

/**
 * _len - length of a string
 * @s:string
 * Return: lenght of s
 */
int _len(const char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @i: input string
 * Return: unsigned decimal conversion, 0 if input is NULL
 */
unsigned int binary_to_uint(const char *i)
{
	int power;
	int num = 0;

	if (!i)
		return (0);
	power = _len(i) - 1;
	while (*i)
	{
		if (*i != '0' && *i != '1')
			return (0);

		if (*i == '1')
			num += powX(2, power);
		i++;
		power--;
	}
	return (num);
}
