#include "main.h"
/*
 *This is a recursive C function named _puts_recursion that prints a string character by character. 
 It stops when it reaches the end of the string (null character) and adds a newline.
 **/
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
