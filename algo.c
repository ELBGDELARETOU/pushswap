/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 14:24:02 by anaouali          #+#    #+#             */
/*   Updated: 2024/01/23 12:38:44 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_algo2(t_list **a, t_list **b)
{
	while (!check_end(*a, *b))
	{
		if ((*a)->content > (*a)->next->content)
			rotate(a, 0);
	}
	return ;
}
void	ft_algo3(t_list **a)
{
	if ((*a)->content == isthebiggest(*a))
		rotate(a, 0);
	else if ((*a)->next->content == isthebiggest(*a))
		reverse_rotate(a, 0);
	if ((*a)->content > (*a)->next->content)
		swap(a, 0);
}

void	finish_a(t_list **a, t_list *top)
{
	while (*a != top)
	{
		if (top->under_mediane == 1)
			rotate(a, 0);
		else
			reverse_rotate(a, 0);
	}
}
void	finish_b(t_list **b, t_list *top)
{
	while (*b != top)
	{
		if (top->under_mediane == 1)
			rotate(b, 2);
		else
			reverse_rotate(b, 2);
	}
}

void	top_it(t_list **a, t_list **b)
{
	t_list	*cheapest;

	if (!b)
		return ;
	cheapest = cheapest_node(*b);
	while (cheapest->under_mediane == 1 && cheapest->target->under_mediane == 1
		&& cheapest->position != 0)
	{
		rr(a, b);
		init(*a, *b);
	}
	while (cheapest->under_mediane == 0
		&& cheapest->target->under_mediane == 0 && cheapest->position != 0)
	{
		rrr(a, b);
		init(*a, *b);
	}
	finish_b(b, cheapest);
	finish_a(a, cheapest->target);
	push_a(a, b);
}
