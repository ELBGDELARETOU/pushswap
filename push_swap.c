/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:19:29 by anaouali          #+#    #+#             */
/*   Updated: 2024/01/23 17:50:06 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stock(int argc, char **argv, t_list **list)
{
	t_list	*new;
	t_list	*current;
	int		i;

	i = 1;
	*list = NULL;
	while (i < argc)
	{
		new = malloc(sizeof(t_list));
		if (!new)
			return ;
		new->content = ft_atoi(argv[i]);
		new->next = NULL;
		if (*list == NULL)
		{
			*list = new;
			current = *list;
		}
		else
		{
			current->next = new;
			current = new;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;

	if (argc == 1 || (!ft_check(argc, argv)))
		return (0);
	ft_stock(argc, argv, &a);
	if (sorted(a))
		return (0);
	while (lst_size(a) >= 3)
		push_b(&a, &b);
	ft_algo3(&a);
	while (b)
	{
		init(a, b);
		top_it(&a, &b);
	}
	b = smallestnode(a);
	while (b->position != 0)
	{
		if (b->under_mediane == 1)
			rotate(&a, 0);
		else
			reverse_rotate(&a, 0);
		set_position(a);
	}
	printf("|----------------------------------------------|\n");
	printf("                         A                       \n");
	printf("|----------------------------------------------|\n");
	while (a)
	{
		if (a)
		{
			printf("content : %ld ", a->content);
			printf("mediane : %ld ", a->under_mediane);
			printf("position : %ld ", a->position);
			printf("price : %ld", a->price);
			printf("\n");
			a = a->next;
		}
	}
	return (0);
}
