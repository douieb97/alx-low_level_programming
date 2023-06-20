#include "main.h"


void print_alphabet(void)
{
	char start, end;

	start = 'a';
	end = 'z';
	while (start <= end)
	{
		_putchar(start);
		if (start == end)
			_putchar('\n');
		start++;
	}
}
