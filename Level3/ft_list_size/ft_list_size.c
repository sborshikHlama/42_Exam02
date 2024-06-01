#include "ft_list_size.h"
#include <unistd.h>

int	ft_list_size(t_list *begin_list)
{
	int len = 0;
	while(begin_list->next)
	{
		len++;
		begin_list = begin_list->next;
	}
	return (len + 1);
}

// int main(int argc, char **argv)
// {
// 	t_list *begin_list = NULL;
// }