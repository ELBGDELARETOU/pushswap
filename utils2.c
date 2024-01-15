/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademnaouali <ademnaouali@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:11:45 by anaouali          #+#    #+#             */
/*   Updated: 2024/01/06 12:26:57 by ademnaouali      ###   ########.fr       */
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

int	isthebiggest(t_list *a)
{
	int c;

	c = a->content;
	while (a->next)
	{
		if (c < a->next->content)
			c = a->next->content;
		else
			a = a->next;
	}
	return c;
}

int		isthesmallest(t_list *a)
{
	int c;

	c = a->content;
	while (a->next)
	{
		if (c > a->next->content)
			c = a->next->content;
		else
			a = a->next;
	}
	return c;
}