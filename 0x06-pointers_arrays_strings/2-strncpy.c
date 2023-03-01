#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: the destination value
 * @src: the source value
 * @n: the limit of the concatenation
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }

    while (i < n) {
        dest[i++] = '\0';
    }

    return dest;
}
