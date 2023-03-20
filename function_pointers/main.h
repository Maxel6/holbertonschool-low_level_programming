#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
void print_name_uppercase(char *name);
void print_name_as_is(char *name);

#endif
