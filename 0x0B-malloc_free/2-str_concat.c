#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatnate 2 strinfs
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to a new memory, NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int i, ci;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	result = malloc(sizeof(char) * (i + ci + 1));
	if (result == NULL)
		return (NULL);
	i = ci = 0;
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[ci] != '\0')
	{
		result[i] = s2[ci];
		i++, ci++;
	}
	result[i] = '\0';
	return (result);
}
