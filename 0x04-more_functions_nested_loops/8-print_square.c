#include "main.h"
/**
  *print_square - prints a square
  *Description: 'prints a square, followed by a new line'
  *Return: empty
  *@size: is the size of the square
 */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(35);
			}
	}
	_putchar('\n');
	}
}
