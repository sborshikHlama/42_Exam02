#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	char *str = argv[1];
	int len = 0;
	int end;
	int start;
	while (str[len] != '\0')
		len++;
	while(len >= 0)
	{
		while (str[len] == ' ' || str[len] == '\t' || str[len] == '\0')
		    len--;
		end = len;
		while (str[len] && str[len] != ' ' && str[len] != '\t')
			len--;
		start = len + 1;
		int flag = start;
		while (start <= end)
		{
			write(1, &str[start], 1);
			start++;
		}
		if (flag != 0)
			write(1, " ", 1);
	}
	write(1, "\n", 1);
}
