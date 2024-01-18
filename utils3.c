/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:10:19 by anaouali          #+#    #+#             */
/*   Updated: 2024/01/18 16:11:04 by anaouali         ###   ########.fr       */
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
	t_list *c;

	c = a;
	while (a->next)
	{
		if (c->content > a->next->content)
			c = a->next;
		a = a->next;
	}
	return (c);
}