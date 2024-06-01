#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int nbr)
{
	char *result;
	int n = nbr;
	int len = 0;

	if (nbr == -2147483648)
		return("-2147483648\0");
	if (nbr < 0)
	{
		len++;
	}
	while (n)
	{
		n = n / 10;
		len++;
	}
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return NULL;
	result[len] = '\0';
	if (nbr == 0)
	{
		result[0] = '0';
		return (result);
	}
	if (nbr < 0)
	{
		result[0] = '-';
        nbr = -nbr;
	}
	while (nbr)
	{
		result[--len] = nbr % 10 + '0';
        nbr /= 10;
	}
	return (result);
}

// int main() 
// {
//     int number = -12345;
//     char *str = ft_itoa(number);
//     if (str) {
//         printf("The string representation of %d is %s\n", number, str);
//         free(str); // Free the allocated memory
//     } else {
//         printf("Memory allocation failed\n");
//     }
//     return 0;
// }