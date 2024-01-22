/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:17:45 by anaouali          #+#    #+#             */
/*   Updated: 2024/01/22 15:56:59 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	rotate_b(t_list **lst, int rr)
// {
// 	t_list	*stock;
// 	t_list	*tmp;

// 	if (!*lst || !(*lst)->next)
// 		return ;
// 	if (rr == 0)
// 		write(1, "rb\n", 3);
// 	stock = (*lst)->next;
// 	tmp = (*lst)->next;
// 	while (tmp->next)
// 		tmp = tmp->next;
// 	tmp->next = *lst;
// 	(*lst)->next = NULL;
// 	*lst = stock;
// }

void	rotate_b(t_list **lst, int rr)
{
	t_list	*current;

	if (!*lst || !(*lst)->next)
		return ;
	if (rr == 0)
		write(1, "rb\n", 3);
	current = *lst;
	while (current->next != NULL)
		current = current->next;
	current->next = *lst;
	*lst = (*lst)->next;
	current->next->next = NULL;
}

void	rotate_a(t_list **lst, int rr)
{
	t_list	*current;

	if (!*lst || !(*lst)->next)
		return ;
	if (rr == 1)
		write(1, "rr\n", 3);
	else
		write(1, "ra\n", 3);
	current = *lst;
	while (current->next != NULL)
		current = current->next;
	current->next = *lst;
	*lst = (*lst)->next;
	current->next->next = NULL;
}

void	rr(t_list **a, t_list **b)
{
	rotate_a(a, 1);
	rotate_b(b, 1);
}
