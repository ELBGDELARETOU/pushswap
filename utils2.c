/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:11:45 by anaouali          #+#    #+#             */
/*   Updated: 2024/01/25 15:21:28 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	int	i;

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
	int	c;

	c = a->content;
	while (a->next)
	{
		if (c < a->next->content)
			c = a->next->content;
		else
			a = a->next;
	}
	return (c);
}

int	isthesmallest(t_list *a)
{
	int	c;

	c = a->content;
	while (a->next)
	{
		if (c > a->next->content)
			c = a->next->content;
		else
			a = a->next;
	}
	return (c);
}
