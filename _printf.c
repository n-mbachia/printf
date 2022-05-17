#include "main.h"
#include <stddef.h>
#include <stdarg.h>

int _printf(const char * format, ...)
{
	va_list args:
	int i = 0, k = 0;
	int *str = NULL;
	 
	va_start(args, format);
	
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			_putchar(format[i];
		else
		{
			if (format[i+1] =='c')
			{
				_putchar(va_arg(args, int);
				i++;
			}
			else if (format[i+1] == 's')
			{
				str = va_arg(args, char *);
				k = 0;
				while (str[i] != '\0')
				{
					_putchar(str[k]);
					k++;
				}
			}
			else if (forma[i+1] == '%'
				{
					i++
				}
		}

		i++
	}
	va_end(args);

	return 0;
}
