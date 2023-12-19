/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:17:53 by anaouali          #+#    #+#             */
/*   Updated: 2023/12/19 18:59:36 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **dest, t_list **src)
{
	t_list *node;

	if (!*src)
		return ;
	// node = malloc(sizeof(t_list));
    // if(!node)
    //     return ;
    ft_lstadd_front(dest, *src);
    *src = (*src)->next;
	// node->content = (*a)->content;
    // node->next = *b;
    // *b = node;
    // *a = (*a)->next;
}