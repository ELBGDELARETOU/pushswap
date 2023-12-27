/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 14:24:02 by anaouali          #+#    #+#             */
/*   Updated: 2023/12/27 18:20:23 by anaouali         ###   ########.fr       */
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

void	ft_algo3(t_list **a, t_list **b)
{
	while (lst_size(*a) >= 3)
		push_b(a, b);
	return ;
}