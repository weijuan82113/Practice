/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 23:39:10 by wchen             #+#    #+#             */
/*   Updated: 2022/10/27 00:19:22 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_node	*ft_lstlast(t_node *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next != NULL)
	{
		lst = lst -> next;
	}
	return (lst);
}
// #include <stdio.h>

// int main (void)
// {
// 	char 	*content_node = "abcd";
// 	char 	*content_new_node = "efgh";
// 	t_node	*new_node;
// 	t_node	*node_node;
// 	t_node	**lst;
// 	t_node	*node_last;
// 	//char	*str;

// 	lst = &node_node;
// 	new_node = ft_lstnew(content_new_node);
// 	node_node = ft_lstnew(content_node);
// 	ft_lstadd_front(lst, new_node);
// 	node_last = ft_lstlast(*lst);
// 	//str = (char *)node_last -> content;
// 	printf("content of last is %s \n", (char *)node_last -> content);
// 	return (0);
// }
