#include "main.h"
void _puts_recursion(char *s)
{
while (*s)
{
	_putchar(*s);
	s++;
}
_putchar('\n');
}

