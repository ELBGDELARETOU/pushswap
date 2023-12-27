/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:11:45 by anaouali          #+#    #+#             */
/*   Updated: 2023/12/27 18:17:36 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
int	check_end(t_list *a, t_list *b)
{
	if (b)
		return (0);
	while (a->next)
	{
		if (a->content < a->next->content)
			a = a->next;
		else
			return (0);
	}
	return (1);
}
int	lst_size(t_list *a)
{
	int i;

	i = 0;
	while (a->next)
	{
		i++;
		a = a->next;
	}
	return (i);
}