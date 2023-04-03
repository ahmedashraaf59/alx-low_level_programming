#include "main.h"
/**
 * _memset-fills memory with constant byte
 * @s: memory to be filled
 * @b: value to be put in memory
 * @n: number of bytes will change
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	_memset(s,'b',n);
	return(s);
}
