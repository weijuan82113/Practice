/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 23:39:10 by wchen             #+#    #+#             */
/*   Updated: 2022/10/26 23:28:24 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_node **lst, t_node *new)
{
	t_node	*tail_node;

	if (!lst || !new)
		return ;
	else if (!*lst)
		*lst = new;
	else
	{
		tail_node = ft_lstlast(*lst);
		tail_node -> next = new;
	}
}
// #include <stdio.h>

// int main (void)
// {
// 	char 	*content_node = "abcd";
// 	char 	*content_front_node = "efgh";
// 	char 	*content_back_node = "ijkl";
// 	t_node	*new_node_front;
// 	t_node	*new_node_back;
// 	t_node	*node_node;
// 	t_node	**lst;
// 	t_node	*node_last;
// 	//char	*str;

// 	lst = &node_node;
// 	new_node_front = ft_lstnew(content_front_node);
// 	new_node_back = ft_lstnew(content_back_node);
// 	node_node = ft_lstnew(content_node);
// 	ft_lstadd_front(lst, new_node_front);
// 	printf("content of add_front
//is %s \n", (char *)(*lst) -> content);
// 	ft_lstadd_back(lst, new_node_back);
// 	printf("content of add_back
//is %s \n", (char *)(*lst) -> next -> next -> content);
// 	node_last = ft_lstlast(*lst);
// 	printf("content of last is %s \n", (char *)(node_last) -> content);
// 	return (0);
// }
