/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 14:24:02 by anaouali          #+#    #+#             */
/*   Updated: 2024/01/19 23:11:51 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_algo2(t_list **a, t_list **b)
{
	while (!check_end(*a, *b))
	{
		if ((*a)->content > (*a)->next->content)
			rotate_a(a);
	}
	return ;
}
void	ft_algo3(t_list **a)
{
	if ((*a)->content == isthebiggest(*a))
		rotate_a(a);
	else if ((*a)->next->content == isthebiggest(*a))
		reverse_rotate_a(a, 0);
	if ((*a)->content > (*a)->next->content)
		swap_a(a);
}

void	algopswp(t_list **a, t_list **b)
{
	if (!b)
		return ;
	while (lst_size(*a) >= 3)
		push_b(a, b);
	ft_algo3(a);
}

void	finish(t_list **a, t_list *top)
{
	while (*a != top)
	{
		if (top->under_mediane == 1)
			rotate_a(a);
		else
			reverse_rotate_a(a, 0);
	}
}

void	top_it(t_list **a, t_list **b)
{
	t_list	*cheapest;

	if (!b)
		return ;
	cheapest = cheapest_node(*b);
	if (cheapest->under_mediane == 1 && cheapest->target->under_mediane == 1
		&& cheapest->position != 0)
	{
		rr(a, b);
		set_position(*a);
		set_position(*b);
	}
	else if (cheapest->under_mediane == 0
		&& cheapest->target->under_mediane == 0 && cheapest->position != 0)
	{
		rrr(a, b);
		set_position(*a);
		set_position(*b);
	}
	finish(b, cheapest);
	finish(a, cheapest->target);
	push_a(a, b);
}
