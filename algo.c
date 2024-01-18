/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademnaouali <ademnaouali@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 14:24:02 by anaouali          #+#    #+#             */
/*   Updated: 2024/01/18 23:33:49 by ademnaouali      ###   ########.fr       */
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
		reverse_rotate_a(a);
	if ((*a)->content > (*a)->next->content)
		swap_a(a);
}

void algopswp(t_list **a, t_list **b)
{
	while (lst_size(*a) >= 3)
			push_b(a, b);
	ft_algo3(a);
}

void	top_it(t_list **a, t_list **b)
{
	t_list *cheapest;
	
	cheapeest = cheapest_node(*b)
	if(cheapest->mediane == 1 && cheapest->target_node->mediane == 1)
 		rr(a, b);
	if(cheapest->mediane == 0 && cheapest->target_node->mediane == 0)
 		rrr(a, b);
	finish(b);
	finish(a);
	pa(a, b);
}