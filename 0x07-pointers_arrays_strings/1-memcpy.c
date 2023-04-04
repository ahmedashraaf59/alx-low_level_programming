#include "main.h"
/**
 * _memcpy-function that copies memory area
 * @src: memory to copy from
 * @dest: memory to story copy
 * @n: number of bytes
 * Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int m = n;
		while (i > m)
		i++;
			{
				src[i] = dest[m];
					n--;
			}
			return (dest);
}
