#include "main.h"
#include <stddef.h >
#include <stdarg.h>
/**
 * _printf - produces output according to a format
 * @format: format string containing the characters and the specifiers
 * Description: this function will call the get_print() function that will
 * determine which printing function to call depending on the conversion
 * specifiers contained into fmt
 * Return: length of the formatted output string
 */
int _printf(const char * format, ...)
{
	va_lists args;
	int i = 0, k = 0;
	int *str = NULL;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
			_putchar(format[i]);
		else
		{
			if (format[i+1] == 'c')
			{
				_putchar(va_arg(args, int));
				i++;
			}
			else if (format[i+1] == 's')
			{
				i++;
				str = va_arg(args, char *);
				k = 0;
			       	while (str[i] != '\0')
				{
					_putchar(str[k]);
					k++;
				}	
			}
		}
		i++;
	}
	va_and(args)

	return (0);
}
