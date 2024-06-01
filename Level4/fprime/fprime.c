#include <stdlib.h>
#include <stdio.h>

void fprime(int n)
{
	if(n == 1)
		printf("%d", n);
	else
	{
		int prime = 2;
		while (n > 1)
		{
			if(n % prime == 0)
			{
				printf("%d", prime);
                n /= prime;
				if (n > 1)
					printf("*");
				prime--;
			}
			prime++;
		}
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("\n");
		return (0);
	}
	char *str = argv[1];
	int n = atoi(str);
	fprime(n);
	printf("\n");
}
