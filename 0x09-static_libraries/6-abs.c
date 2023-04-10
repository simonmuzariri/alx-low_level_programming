#include "main.h"
/**
  * _abs - computes the absolute value
  *Description: 'computes the absolute value of an integer'
  *Return: Absolute Value
  *@i: input number as an integer
*/
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
