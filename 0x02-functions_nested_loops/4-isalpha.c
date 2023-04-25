#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int s)
{
	return ((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z'));
}
