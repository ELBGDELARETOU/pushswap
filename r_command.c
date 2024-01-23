/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_command.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:17:45 by anaouali          #+#    #+#             */
/*   Updated: 2024/01/23 11:46:23 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **lst, int rr)
{
	t_list	*current;

	if (!*lst || !(*lst)->next)
		return ;
	if (rr == 1)
		write(1, "rr\n", 3);
	if (rr == 0)
		write(1, "ra\n", 3);
	if (rr == 2)
		write(1, "rb\n", 3);
	current = *lst;
	while (current->next != NULL)
		current = current->next;
	current->next = *lst;
	*lst = (*lst)->next;
	current->next->next = NULL;
}

void	rr(t_list **a, t_list **b)
{
	rotate(a, 1);
	rotate(b, 3);
}

void	reverse_rotate(t_list **lst, int rrr)
{
	t_list	*tmp;
	t_list	*stock;

	stock = NULL;
	if (!*lst || !(*lst)->next)
		return ;
	if (rrr == 1)
		write(1, "rrr\n", 4);
	if (rrr == 0)
		write(1, "rra\n", 4);
	if (rrr == 2)
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
	reverse_rotate(a, 1);
	reverse_rotate(b, 3);
}