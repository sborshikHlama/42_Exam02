#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	char *str1 = argv[1];
	char *str2 = argv[2];
	int i = 0;
	int j = 0;
	int count = 0;
	while(str2[i] != '\0')
	{
		if(str1[j] == str2[i])
		{
			j++;
		}
		i++;
	}
	if (str1[j] == '\0')
		write(1, "1", 1);
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}