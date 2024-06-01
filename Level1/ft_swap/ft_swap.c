/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	tmp;
		
	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*int	main(void)
{
	int	x;
	int	y;
	int	*a;
	int	*b;

	x = 5;
	y = 3;
	a = &x;
	b = &y;
	ft_swap(a, b);
	printf("%d", *a);
	printf("%d", *b);
	return (0);
}*/
