/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:28:01 by anaouali          #+#    #+#             */
/*   Updated: 2024/01/29 19:01:11 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_position(t_list *a)
{
	int	i;
	int	mediane;

	if (!a)
		return ;
	mediane = lst_size(a) / 2;
	i = 0;
	while (a)
	{
		a->position = i;
		if (i <= mediane)
			a->under_mediane = 1;
		else
			a->under_mediane = 2;
		a = a->next;
		i++;
	}
}

void	set_target(t_list *a, t_list *b)
{
	t_list		*current_a;
	t_list		*target_node;
	long int	max;

	while (b)
	{
		current_a = a;
		max = LONG_MAX;
		while (current_a)
		{
			if (current_a->content > b->content && current_a->content < max)
			{
				max = current_a->content;
				target_node = current_a;
			}
			current_a = current_a->next;
		}
		if (max == LONG_MAX)
			b->target = smallestnode(a);
		else
			b->target = target_node;
		b = b->next;
	}
}

void	set_price(t_list *a, t_list *b)
{
	int	len_a;
	int	len_b;

	len_a = lst_size(a);
	len_b = lst_size(b);
	while (b)
	{
		b->price = b->position;
		if (b->under_mediane == 1 && b->target->under_mediane == 1)
		{
			if (b->position > b->target->position)
				b->price = b->position;
			else
				b->price = b->target->position;
		}
		else
			pricring(a, b, len_a, len_b);
		b = b->next;
	}
}

void	set_cheapest(t_list *a, t_list *b)
{
	t_list		*cheapest;
	long int	cost;

	cost = LONG_MAX;
	setto_zero(b);
	while (b)
	{
		if (b->price < cost)
		{
			cost = b->price;
			cheapest = b;
		}
		b = b->next;
	}
	cheapest->cheapest = 1;
}

void	init(t_list *a, t_list *b)
{
	set_position(a);
	set_position(b);
	set_target(a, b);
	set_price(a, b);
	set_cheapest(a, b);
}
