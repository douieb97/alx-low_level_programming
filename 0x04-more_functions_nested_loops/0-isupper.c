#include "main.h"
/**
 * _isupper - check character case
 * @c: character to check
 * Return: 1 (Seccess)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
