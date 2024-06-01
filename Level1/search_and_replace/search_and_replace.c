#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc != 4 || argv[2][1] || argv[3][1])
	{
		write(1, "\n", 1);
		return (0);
	}
	int i = 0;
	char *str = argv[1];
	while (str[i] != '\0')
	{
		if (str[i] == argv[2][0])
			str[i] = argv[3][0];
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}