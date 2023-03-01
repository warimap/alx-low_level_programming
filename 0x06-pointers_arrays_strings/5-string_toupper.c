#include "main.h"
/**
 * *string_toupper - converts a string to uppercase
 * @s: string to be converted to uppercase
 * Return: converted string
 */
char *string_toupper(char *str)
{
    char *p = str;
    while (*p != '\0') {
        if (*p >= 'a' && *p <= 'z') {
            *p = (*p - 'a') + 'A';
        }
        p++;
    }
    return str;
}
