#include "main.h"
/**
 * print_alphabet - print alphabets
 *
 * Description: Print Alphabet 10 times
 */
void print_alphabet_x10(void)
{
	char start, end;
	int i;

	start = 'a';
	end = 'z';
	i = 1;
	while (i <= 10)
	{
		while (start <= end)
		{
			_putchar(start);
			start++;
		}
		_putchar('\n');
	}
}
