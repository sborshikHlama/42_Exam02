#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int len = 0;

	while (src[len])
	    len++;
	char *dest = malloc(sizeof(char) * len + 1);
	int i = 0;
	while (src[i])
	{
		dest[i] = src[i];
        i++;
	}
	dest[i] = '\0';
	return (dest);
}	