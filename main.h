<<<<<<< HEAD
#ifndef PRINT_F

#define PRINT_F



#include <unistd.h>

#include <stdlib.h>

=======
#ifndef _MAIN_H_
#define _MAIN_H_

>>>>>>> 2b48ab73094749fad34d27b5c8ec7e7873e6dc48
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>


/**
<<<<<<< HEAD
 * struct convert - defines a structure for symbols and functions
 * @sym: The operator
 * @f: The function associated
*/

struct convert

{

	char *sym;

	int (*f)(va_list);

};

typedef struct convert conver_t;



/*Main functions*/

int parser(const char *format, conver_t f_list[], va_list arg_list);

int _printf(const char *format, ...);

int _write_char(char);

int print_char(va_list);

int print_string(va_list);

int print_percent(va_list);

int print_integer(va_list);

int print_number(va_list);

int print_binary(va_list);

int print_reversed(va_list arg);

int rot13(va_list);

int unsigned_integer(va_list);

int print_octal(va_list list);

int print_hex(va_list list);

int print_heX(va_list list);



/*Helper functions*/

unsigned int base_len(unsigned int, int);

char *rev_string(char *);

void write_base(char *str);

char *_memcpy(char *dest, char *src, unsigned int n);

int print_unsgined_number(unsigned int);
=======
 * struct print_struct - structure for printing various types
 * @t: type to print
 * @f: function to print
 */

typedef struct print_struct
{
	char *t;
	int (*f)(va_list);
} print_type;

>>>>>>> 2b48ab73094749fad34d27b5c8ec7e7873e6dc48

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_d(va_list d);
int print_b(va_list b);
int print_u(va_list u);
int print_o(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_S(va_list S);
int print_p(va_list p);
int (*check_specifier(const char *format))(va_list);
int print_hex(unsigned int n, unsigned int c);
int hex_print(char c);
int print_r(va_list r);
int print_R(va_list R);




#endif
