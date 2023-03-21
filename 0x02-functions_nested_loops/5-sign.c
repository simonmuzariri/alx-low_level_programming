#include "main.h"
/**
  *print_sign -  prints the sign
  *Descrption: 'prints the sign of a number'
  *Return: 1 is greater than. 0 is zero.
  *-1 is less than 0
  *@n: The input number as integer
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
