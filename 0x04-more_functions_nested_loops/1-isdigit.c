#include "main.h"
/**
 * _isdigist - check digists
 * @c: parametter to check
 * Return: 1 (Seccess)
 */
int _isdigist(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
