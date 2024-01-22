/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:17:49 by anaouali          #+#    #+#             */
/*   Updated: 2024/01/22 15:52:10 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_list **lst, int rrr)
{
	t_list	*tmp;
	t_list	*stock;

	stock = NULL;
	if (!*lst || !(*lst)->next)
		return ;
	if (rrr == 1)
		write(1, "rrr\n", 4);
	else
		write(1, "rra\n", 4);
	tmp = *lst;
	while (tmp->next->next)
		tmp = tmp->next;
	stock = tmp->next;
	tmp->next = NULL;
	stock->next = *lst;
	*lst = stock;
}

void	reverse_rotate_b(t_list **lst, int rrr)
{
	t_list	*tmp;
	t_list	*stock;

	stock = NULL;
	if (!*lst || !(*lst)->next)
		return ;
	if (rrr == 0)
		write(1, "rrb\n", 4);
	tmp = *lst;
	while (tmp->next->next)
		tmp = tmp->next;
	stock = tmp->next;
	tmp->next = NULL;
	stock->next = *lst;
	*lst = stock;
}

void	rrr(t_list **a, t_list **b)
{
	reverse_rotate_a(a, 1);
	reverse_rotate_b(b, 1);
}
