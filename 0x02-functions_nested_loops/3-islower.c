#include "main.h"
/**
  *_islower - 'checks lowercase
  *Description:'that checks for lowercase character'
  *Return: return 1 for lowercase character 0 for everything
  *@c: lowercase character in ASCII code
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
