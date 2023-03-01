#include "main.h"
/**
 * rot13 - encodes a string in rot13
 * @s: string to be encoded
 * Return: the resulting string
 */
char *rot13(char *s)
{
    char *result = (char *) malloc(sizeof(char) * (strlen(s) + 1));
    if (result == NULL) {
        return NULL;
    }

    int i;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            result[i] = ((s[i] - 'a' + 13) % 26) + 'a';
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            result[i] = ((s[i] - 'A' + 13) % 26) + 'A';
        } else {
            result[i] = s[i];
        }
    }
    result[i] = '\0';

    return result;
}
