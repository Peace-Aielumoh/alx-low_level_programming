#include "main.h"

/**
 * _puts - prints a spring
 * @str:pointer char
 * Return:void which means our answer is correct
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
_putchar('\n');
return;
}
