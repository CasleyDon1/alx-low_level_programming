#include "main.h"
/**
 *_strncat - concatenates two strings
 *@dest: A pointer to a character that will be changed
 *@src: A pointer to a character that will be changed
 *@n: value
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
int i, j;
while (dest[i] != '\0')
{
i++;
}

j = 0;
while (j < n && src[j] != '\0')
j++;
i++;
}

dest[i] = '\0';

return (dest);
}
