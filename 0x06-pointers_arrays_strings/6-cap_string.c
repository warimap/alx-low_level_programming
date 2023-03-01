#include "main.h"
/**
 * cap_string - Capitalizes all words of a string.
 *
 * @s: The string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *s)
{
	int i = 0;

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] -= ('a' - 'A');

	while (s[i] != '\0')
	{
		switch (s[i])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',': case ';': case '.': case '!': case '?':
			case '\"': case '(': case ')': case '{': case '}':
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= ('a' - 'A');
				break;

			default:
				break;
		}

		i++;
	}

	return (s);
}
