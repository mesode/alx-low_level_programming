#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest: final memory where is stored
 *@src: memory where is copied from
 *@n: number of bytes copied
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;


	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

