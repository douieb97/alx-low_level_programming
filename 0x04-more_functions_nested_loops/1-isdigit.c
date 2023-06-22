#include "main.h"
/**
 * _isdigit - check digists
 * @c: parametter to check
 * Return: 1 (Seccess)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
