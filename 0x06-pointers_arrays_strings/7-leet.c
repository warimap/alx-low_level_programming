#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer to dest.
 */
char *leet(char *str) {
    char *leet_chars = "aAeEoOtTlL";
    char *leet_repl = "44330771";
    int i, j;
    for (i = 0; str[i] != '\0'; i++) {
        for (j = 0; j < strlen(leet_chars); j++) {
            if (str[i] == leet_chars[j]) {
                str[i] = leet_repl[j];
                break;
            }
        }
    }
    return str;
}

int main() {
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);
    leet(str);
    printf("Leet string: %s\n", str);
    return 0;
}
