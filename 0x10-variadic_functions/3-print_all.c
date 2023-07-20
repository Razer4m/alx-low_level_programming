#include "variadic_functions.h"
/**
 * print_all - Prints anything based on the provided format
 * @format: A list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str_arg;
	int int_arg;
	float float_arg;
	char char_arg;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				char_arg = va_arg(args, int);
				printf("%c", char_arg);
				break;
			case 'i':
				int_arg = va_arg(args, int);
				printf("%d", int_arg);
				break;
			case 'f':
				float_arg = va_arg(args, double);
				printf("%f", float_arg);
				break;
			case 's':
				str_arg = va_arg(args, char *);
				if (str_arg == NULL)
					printf("(nil)");
				else
					printf("%s", str_arg);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(args), printf("\n");
}
