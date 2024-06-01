#include <unistd.h>

int main(int argc, char **argv)
{
	char *str = argv[1];

	if (argc != 2)
	{
		write(1, "\n", 1);
		return 0;
	}

	while (*str == ' ' || *str == '\t')
		str++;
	while (*str != '\0')
    {
		if (*str == ' ' || *str == '\t')
		{
			if (*(str + 1) != '\0')
				write(1, " ", 1);
			while((*str == ' ' || *str == '\t'))
			    str++;
		}
		else
		{
			write(1, str, 1);
			str++;
		}
	}
	write(1, "\n", 1);
}