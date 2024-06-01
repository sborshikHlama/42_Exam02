#include <unistd.h>

int main(int argc, char **argv)
{
	char *str = argv[1];
	int len = 0;
	int end;
	int start;

	if (argc != 2)
	{
		write(1, "\n", 1);
        return (0);
	}
	while (str[len] != '\0')
		len++;
	len--;
	while (str[len] == ' ' || str[len] == '\t')
		len--;
	end = len;
	while (str[len] != ' ' && str[len] != '\t')
		len--;
	start = len + 1;
	while (start <= end)
	{
		write(1, &str[start], 1);
        start++;
	}
	write(1, "\n", 1);
}