
#include "libft.h"

void print_list(t_node *lst)
{
	while (lst)
	{
		printf("%d-->", lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

void	front_back_split(t_node *source, t_node **front_ref, t_node **back_ref)
{
	t_node	*fast;
	t_node	*slow;

	slow = source;
	fast = source->next;
	while (fast != NULL)
	{
		fast = fast->next;
		if (fast != NULL)
		{
			fast = fast->next;
			slow = slow->next;
		}
	}
	*front_ref = source;
	*back_ref = slow->next;
	slow->next = NULL;
	// printf("----front_ref----\n");
	// print_list(*front_ref);
	// printf("----back_ref----\n");
	// print_list(*back_ref);
}

t_node	*sorted_merge(t_node *a, t_node *b)
{
	t_node	*result;

	if (a == NULL)
		return (b);
	else if (b == NULL)
		return (a);
	if(a -> content <= b -> content)
	{
		result = a;
		result -> next = sorted_merge(a -> next, b);
	}
	else
	{
		result = b;
		result -> next = sorted_merge(a, b -> next);
	}
	return (result);
}

void	merge_sort(t_node **headRef)
{
	t_node	*head = *headRef;
	t_node	*a;
	t_node	*b;

	if ((head == NULL) || (head->next) == NULL)
		return;
	front_back_split(head, &a, &b);
	merge_sort(&a);
	merge_sort(&b);
	*headRef = sorted_merge(a, b);
}

int	main(void)
{
	int		arr[] = {1000,1, 1, 42, 13, 43, 503, 223};
	int		arr_size;
	t_node	*head;

	arr_size = sizeof(arr) / sizeof(arr[0]);
	head = lst_init(arr, arr_size);
	printf("----before_merge_sort----\n");
	print_list(head);
	merge_sort(&head);
	printf("----after_merge_sort----\n");
	print_list(head);
	ft_lstclear(&head, free);
}
