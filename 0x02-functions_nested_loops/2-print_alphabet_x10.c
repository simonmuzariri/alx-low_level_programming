#include "main.h"
/**
  *print_alphabet_x10 - prints alphabet
  *Description: hat prints 10 times the alphabet
  *Return: Alway 0
*/
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 1; i <= 10 ; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
