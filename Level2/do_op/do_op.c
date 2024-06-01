#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		write (1, "\n", 1);
		return (0);
	}
	char *argument1 = argv[1];
	char *argument2 = argv[3];
	char operator = argv[2][0];
	if (operator == '+')
		printf ("%d\n", atoi(argument1) + atoi(argument2));
	else if (operator == '-')
		printf ("%d\n", atoi(argument1) - atoi(argument2));
	else if (operator == '*')
		printf ("%d\n", atoi(argument1) * atoi(argument2));
	else if (operator == '/')
		printf ("%d\n", atoi(argument1) / atoi(argument2));
	else if (operator == '%')
		printf ("%d\n", atoi(argument1) % atoi(argument2));
	return (0);
}