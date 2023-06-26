#include "main.h"
/**
 * rev_string reverses the string
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
	int len = 0;
	char *first = s;
	char *last = s;

	while (*last != '\n')
	{
		len++;
		last++;
	}

	end--;
	while (first < last)
	{
		char x = *first;
		*first = *last;
		*last = x;

		first++;
		last--;
	}
}
