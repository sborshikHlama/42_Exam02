#include <stdio.h>

int	ft_atoi(const char *str)
{
	int result = 0;
	int sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign = -1;
        str++;
	}
	while (*str == '-' || *str == '+')
		str++;
	if (*str == '0')
		return (0);
	while(*str>='0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

// int main() 
// {
//     char *number = "+13268!";
//     int str = ft_atoi(number);
//     printf("The string representation of %s is %d\n", number, str);
 
//     return 0;
// }