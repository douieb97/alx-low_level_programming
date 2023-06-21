#include <ctype.h>
#include "main.h"
/**
 *
 */
int _islower(int c)
{
	int result;
	if ( islower(c) == 0)
		result = 0;
	else
		result = 1;
	return (result);
}
