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
	int i, j, len1, len2, len;
	char *result;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			len1++;
	}
	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			len2++;
	}
	len = len1 + len2;

	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (j = 0; j < len2; i++)
		result[i] = s2[j];
	result[len] = '\0';

	return (result);
}
