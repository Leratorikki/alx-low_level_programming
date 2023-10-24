#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything
 * @format: A format string 'c' for char,'i' for integer,
 * 'f' for float, 's' for string
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *separator = "";
	char *str;

	va_start(ap, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(ap, int));
				break;

			case 'i':
				printf("%s%d", separator, va_arg(ap, int));
				break;

			case 'f':
				printf("%s%f", separator, va_arg(ap, double));
				break;

			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;

			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}

	va_end(ap);
	printf("\n");
}
