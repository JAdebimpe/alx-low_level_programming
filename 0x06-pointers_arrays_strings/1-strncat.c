#include "main.h"
#include <stdio.h>
/**
 * _strncat - Concatenates two strings using most
 * an inputted number of bytes from src
 * @dest : The string to be apprehended upon
 * @src: The string to be apprehended to dest
 * @n: The number of bytes to be apprehended to dest
 * Return : A printer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{int index = 0, dest_len = 0;
while (dest[index++])dest_len++;
for (index = 0; src[index] && index < n; index++ )
dest[dest_len++] = src[index];
return (dest);
}
