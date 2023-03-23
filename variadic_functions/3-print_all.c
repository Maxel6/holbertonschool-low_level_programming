#include "variadic_functions.h"

typedef struct type
{
	char form;
	void (*f)(va_list);
}type_t;

void charf(va_list c)
{
	int lettre = va_arg(c, int);
	printf("%c", lettre);
}
void floatf(va_list f)
{
	double fl = va_arg(f, double);
	printf("%f", fl);
}
void intf(va_list i)
{
	int num = va_arg(i, int);
	printf("%d", num);
}
void strf(va_list s)
{
	char *str = va_arg(s, char *);
	printf("%s", str);
}
void print_all(const char * const format, ...)
{
	type_t typ[]={
		{'c', charf},
		{'i', intf},
		{'f', floatf},
		{'s', strf},
		{0, NULL}
	};
	int i = 0;
	int y = 0;
	va_list list;

	va_start(list, format);

	while (format[i])
	{
		y = 0;
		while (typ[y].form)
		{
			if (format[i] == typ[y].form)
			{
				typ[y].f(list);
				if (format[i + 1] != '\0')
				 printf(", ");
			}
			y++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
