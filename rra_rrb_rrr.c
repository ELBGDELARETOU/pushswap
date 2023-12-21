/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:17:49 by anaouali          #+#    #+#             */
/*   Updated: 2023/12/21 18:49:24 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	reverse_rotate_a(t_list **lst)
{
	t_list	*tmp;
	t_list	*stock = NULL;

	if (!*lst || !(*lst)->next)
		return ;
	tmp = *lst;
	while (tmp->next->next)
		tmp = tmp->next;
	stock = tmp->next;
	tmp->next = NULL;
	stock->next = *lst;
	*lst = stock;
}

void	reverse_rotate_b(t_list **lst)
{
	t_list	*tmp;
	t_list	*stock = NULL;

	if (!*lst || !(*lst)->next)
		return ;
	tmp = *lst;
	while (tmp->next->next)
		tmp = tmp->next;
	stock = tmp->next;
	tmp->next = NULL;
	stock->next = *lst;
	*lst = stock;
}
