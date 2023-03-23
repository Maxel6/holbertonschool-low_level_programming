#include "variadic_functions.h"
/**
 * charf - print a char
 * @c: arguments parameter
 */
void charf(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
 * floatf - print a float
 * @f: arguments parameter
 */
void floatf(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 * intf - print an integer
 * @i: arguments parameter
 */
void intf(va_list i)
{
	printf("%d", va_arg(i, int));
}
/**
 * strf - print a string
 * @s: arguments parameter
 */
void strf(va_list s)
{
	char *word = va_arg(s, char *);

	if (s == NULL)
		word = "(nil)";
	printf("%s", word);
}
/**
 * print_all - prints anything
 * @format: is a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	int y = 0;
	va_list list;
	char *com = "";

	type_t typ[] = {
		{'c', charf},
		{'i', intf},
		{'f', floatf},
		{'s', strf},
		{0, NULL}
	};
	va_start(list, format);
	while (format && format[i])
	{
		y = 0;
		printf("%s", com);
		com = "";
		while (typ[y].form)
		{
			if (typ[y].form == format[i])
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
