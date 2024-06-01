#include <unistd.h>

void print_hex(int nmr)
{
	char *number = "0123456789abcdef";

	if (nmr > 16)
	    print_hex(nmr / 16);
	write(1, &number[nmr % 16], 1);
}

int ft_atoi(char *str)
{
	int i = 0;
	int result = 0;
	while (str[i])
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}