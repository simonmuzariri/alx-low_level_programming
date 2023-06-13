#include "main.h"
#include <stdlib.h>
/**
 *  _strdup - return a newly allocated space in memmory
 *  @str: the source string
 *
 *  Return: a pointer or NULL
 */
char *_strdup(char *str)
{
	char *copy;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	copy = (char *)malloc(sizeof(char) * len + 1);
	if (copy == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		copy[i] = str[i];
	copy[len] = '\0';

	return (copy);
}
