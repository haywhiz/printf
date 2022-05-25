#include "main.h"

/**
 *  _printf - prints %c and %s format specifier
 *  @format: format string
 *  Return: number of printed charaters
 */

int _printf(const char *format, ...)

{
<<<<<<< HEAD
	int printed_chars;

	conver_t f_list[] = {

		{"c", print_char},

		{"s", print_string},

		{"%", print_percent},

		{"d", print_integer},

		{"i", print_integer},

		{"b", print_binary},

		{"r", print_reversed},

		{"R", rot13},

		{"u", unsigned_integer},

		{"o", print_octal},

		{"x", print_hex},

		{"X", print_heX},

		{NULL, NULL}

	};

	va_list arg_list;

	if (format == NULL)
		return (-1);
	va_start(arg_list, format);
	printed_chars = parser(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
=======
	unsigned int i = 0, count = 0;
	va_list valist;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);

	va_start(valist, format);

	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			count++;
		}

		if (!format[i])
			return (count);

		f = check_specifier(&format[i + 1]);
		if (f != NULL)
		{
			count += f(valist);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(valist);
	return (count);
>>>>>>> 2b48ab73094749fad34d27b5c8ec7e7873e6dc48
}
