#include "libft.h"

t_node *lst_init(int *arr, int arr_size)
{
	size_t	i;
	t_node	*head;

	head = ft_lstnew(arr[0]);
	i = 1;
	while (i < (size_t)arr_size)
		ft_lstadd_back(&head, ft_lstnew(arr[i++]));
	return (head);
}

