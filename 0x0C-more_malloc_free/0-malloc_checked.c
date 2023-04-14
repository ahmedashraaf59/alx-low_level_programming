#include "main.h"
/**
 * *malloc_checked-allocates memory
 * @b: int
 * Return:0
 */
void *malloc_checked(unsigned int b)
{
	int *h = malloc(b);

	if (h == 0)
		exit(98);
	return (h);
}
