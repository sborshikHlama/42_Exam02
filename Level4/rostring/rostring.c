#include <unistd.h>

void print_last(char *first_elem, char *last_elem)
{
	while (first_elem < last_elem)
	{
		write(1, first_elem, 1);
        first_elem++;
	}
}

//" Hello, world! This is a test."//

int main(int argc, char **argv)
{
	char *first_elem;
    char *last_elem;
	char *str;


  	if (argc > 1)
  	{
		str = argv[1];

		while (*str == ' ' || *str == '\t')
			str++;
		first_elem = str;
		while (*str && *str != ' ' && *str != '\t')
	  	  str++;
		last_elem = str;
		while (*str == ' ' || *str == '\t')
			str++;
		if (*str)
		{
			while (*str)
			{
				if (*str == ' ' || *str == '\t')
				{
					while (*str == ' ' || *str == '\t')
				  	  str++;
					if (*str)
						write (1, " ", 1);
				}
				else 
				{
					write (1, str, 1);
					str++;
				}
			}
			write (1, " ", 1);
		}
		print_last(first_elem, last_elem);
 	 }
	write (1, "\n", 1);
    return (0);
}