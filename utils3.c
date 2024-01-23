/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:10:19 by anaouali          #+#    #+#             */
/*   Updated: 2024/01/23 16:02:15 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*bigestnode(t_list *a)
{
	t_list	*c;

	c = a;
	while (a->next)
	{
		if (c->content < a->next->content)
			c->content = a->next->content;
		else
			a = a->next;
	}
	return (c);
}

t_list	*smallestnode(t_list *a)
{
	t_list	*c;

	c = a;
	while (a->next)
	{
		if (c->content > a->next->content)
			c = a->next;
		a = a->next;
	}
	return (c);
}

t_list	*cheapest_node(t_list *b)
{
	while (b)
	{
		if (b->cheapest == 1)
			return (b);
		b = b->next;
	}
	return (NULL);
}

int	sorted(t_list *a)
{
	while (a->next)
	{
		if (a->content < a->next->content)
			a = a->next;
		else
			return (0);
	}
	return (1);
}
