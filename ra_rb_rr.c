/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:17:45 by anaouali          #+#    #+#             */
/*   Updated: 2023/12/21 18:49:27 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	rotate_a(t_list **lst)
// {
// 	t_list	*stock;
// 	t_list	*tmp;

// 	if (!*lst || !(*lst)->next)
// 		return ;
// 	stock = (*lst)->next;
// 	tmp = (*lst)->next;
// 	while (tmp->next)
// 		tmp = tmp->next;
// 	tmp->next = *lst;
// 	(*lst)->next = NULL;
// 	*lst = stock;
// }

void	rotate_b(t_list **lst)
{
	t_list	*stock;
	t_list	*tmp;

	if (!*lst || !(*lst)->next)
		return ;
	stock = (*lst)->next;
	tmp = (*lst)->next;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = *lst;
	(*lst)->next = NULL;
	*lst = stock;
}

void rotate_a(t_list **lst)
{
    if (!*lst || !(*lst)->next)
        return;

    t_list *current = *lst;

    while (current->next != NULL)
        current = current->next;
    current->next = *lst;
    *lst = (*lst)->next;
    current->next->next = NULL;
}
