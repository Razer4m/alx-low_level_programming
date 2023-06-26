#include "main.h"
/**
 * rev_string reverses the string
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char t

	while (s[i])
	{
		len++;
	}

	i = len - 1;
	while (i >= len / 2)
	{
		t = s[i];
		s[i] = s[len - i -1];
		s[len - index -1] = t;
	}
}
