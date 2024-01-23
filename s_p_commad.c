/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_p_commad.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:16:40 by anaouali          #+#    #+#             */
/*   Updated: 2024/01/23 11:53:51 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **a, int swap)
{
	int	tmp;

	if (*a != NULL && (*a)->next != NULL)
	{
		tmp = (*a)->content;
		(*a)->content = (*a)->next->content;
		(*a)->next->content = tmp;
	}
	if (swap == 0)
		write(1, "sa\n", 3);
	if (swap == 1)
		write(1, "sb\n", 3);
	else
		return ;
}
void	push_b(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (!*a)
		return ;
	tmp = malloc(sizeof(t_list));
	if (!tmp)
		return ;
	write(1, "pb\n", 3);
	tmp->content = (*a)->content;
	tmp->next = *b;
	*a = (*a)->next;
	(*b) = tmp;
}
void	push_a(t_list **a, t_list **b)
{
	t_list *tmp;

	if (!*a)
		return ;
	tmp = malloc(sizeof(t_list));
	if (!tmp)
		return ;
	write(1, "pa\n", 3);
	tmp->content = (*b)->content;
	tmp->next = *a;
	*b = (*b)->next;
	(*a) = tmp;
}