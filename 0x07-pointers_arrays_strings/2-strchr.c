#include "main.h"
/**
  *_strchar - function that locates a character in a string
  *@c: input
  *@s: input
  *Return: Always 0
  */
char *_strchar(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
