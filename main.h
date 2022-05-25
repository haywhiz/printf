#ifndef _PRINTF
#define _PRINTF

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct convert - defines a structure foor specificers and function
 *
 * @ops: the operator
 * @f: function
*/

struct convert
{
	char *ops;
	int (*f)(va_list);
};
typedef struct convert convert_;

/* parser fuction is to count the number of characters printed*/
int parser(const char *format, convert_ f_list[], va_list arg_list);
/* main function*/
int _print(const char *format, ...);
int _write_char(char);

