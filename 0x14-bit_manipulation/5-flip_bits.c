#include "main.h"

/**
 * flip_bits- returns the number of bits you would need to flip to get
 * from number to another
 * @n: unsigned long integer
 * @m: unsigned long integer
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int no;

	for (no = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			no++;
	}

	return (no);
}
