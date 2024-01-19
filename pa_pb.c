/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:17:53 by anaouali          #+#    #+#             */
/*   Updated: 2024/01/19 17:44:30 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	t_list	*tmp;

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