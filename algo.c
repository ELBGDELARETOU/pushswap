/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 14:24:02 by anaouali          #+#    #+#             */
/*   Updated: 2024/01/17 16:08:05 by anaouali         ###   ########.fr       */
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
// void	sort(t_list **a, t_list **b)
// {
// 	t_list *cheapest_node;
	
// 	if (cheapest_node->under_mediane == 1 && cheapest_node->target->under_mediane == 1)
// 		rr(*a, *b);
// 	if (cheapest_node->under_mediane == 0 && cheapest_node->target->under_mediane == 0)
// 		rrr(*a, *b);
// 	top_it();
// }

// void	top_it(t_list **node, t_list **target_node, char c)
// {
// 	while(node)
// 	{
// 		if(target_node->position != 0)
// 			rotate_a(target_node);
// 		if (node->position != 0 && node->mediane == 1)
// 			rotate_b(node);
// 		if (node->position != 0 && node->mediane == 0)
// 			reverse_rotate_b(node);
// 	}
// }