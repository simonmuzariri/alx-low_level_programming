#include "main.h"

/**
 * binary_to_unit - C converts a binary number to an unsigned int
 * @b: a pointer to a string of 0 and 1 chars.
 * Return: if b is NULL or contains char 0 or 1 - 0.
 * Otherwise - the converted number.
 */
unsigned int binary_to_unit(const char *b)
{
	unsigned int dec_val = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		dec_val = 2 * dec_val + (b[i] - '0');
	}
	return (dec_val);
}
