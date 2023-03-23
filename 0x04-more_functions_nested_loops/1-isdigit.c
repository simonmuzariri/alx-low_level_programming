#include "main.h"
/**
  *_isdigit - checks for a digit
  *Description: 'checks for a digit (0 through 9).'
  *Return: 1 for c. 0 otherwise
  *@c: is an integer
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
