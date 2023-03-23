#include "variadic_functions.h"
/**
 * charf - print a char
 * @c: arguments parameter
 */
void charf(va_list c)
{
	int lettre = va_arg(c, int);

	printf("%c", lettre);
}
/**
 * floatf - print a float
 * @f: arguments parameter
 */
void floatf(va_list f)
{
	double fl = va_arg(f, double);

	printf("%f", fl);
}
/**
 * intf - print an integer
 * @i: arguments parameter
 */
void intf(va_list i)
{
	int num = va_arg(i, int);

	printf("%d", num);
}
/**
 * strf - print a string
 * @s: arguments parameter
 */
void strf(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
/**
 * print_all - prints anything
 * @format: is a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	type_t typ[] = {
		{'c', charf},
		{'i', intf},
		{'f', floatf},
		{'s', strf},
		{0, NULL}
	};
	int i = 0;
	int y = 0;
	va_list list;
	char *com = "";

	va_start(list, format);

	while (format[i] && format != NULL)
	{
		y = 0;
		printf("%s", com);
		com = "";
		while (typ[y].form)
		{
			if (format[i] == typ[y].form)
			{
				typ[y].f(list);
				com = ", ";
			}
			y++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
