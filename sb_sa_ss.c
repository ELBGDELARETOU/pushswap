/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb_sa_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:16:40 by anaouali          #+#    #+#             */
/*   Updated: 2024/01/22 15:52:13 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_list **a)
{
	int	tmp;

	if (*a != NULL && (*a)->next != NULL)
	{
		tmp = (*a)->content;
		(*a)->content = (*a)->next->content;
		(*a)->next->content = tmp;
	}
	write(1, "sa\n", 3);
	return ;
}
void	swap_b(t_list **a)
{
	int	tmp;

	if (*a != NULL && (*a)->next != NULL)
	{
		tmp = (*a)->content;
		(*a)->content = (*a)->next->content;
		(*a)->next->content = tmp;
	}
	write(1, "sb\n", 3);
	return ;
}
