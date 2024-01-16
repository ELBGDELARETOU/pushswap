/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademnaouali <ademnaouali@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:19:29 by anaouali          #+#    #+#             */
/*   Updated: 2024/01/16 17:37:40 by ademnaouali      ###   ########.fr       */
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
	t_list *a;
	t_list *b;

	b = malloc(sizeof(t_list));
	if (!b)
		return 0;
	if (argc == 1)
		return (0);
	if (!ft_check(argc, argv))
		return (0);
	ft_stock(argc, argv, &a);
	algopswp(&a, &b);
	init(a, b);
	printf ("-------------------------------------\n");
	printf("a\n");
	printf ("-------------------------------------\n");
	while (a)
	{
		if (a)
		{
			printf("content : %ld ", a->content);
			printf("mediane : %ld ", a->under_mediane);
			printf("position : %ld ", a->position);
			//printf("price : %d", a->price);
			printf("\n");
			a = a->next;
		}
	}
	printf("b\n");
	printf ("-------------------------------------\n");
	while (b->content)
	{
		if (b)
		{
			printf("content : %ld ", b->content);
			printf("mediane : %ld ", b->under_mediane);
			printf("position : %ld ", b->position);
			printf("target : %ld ", b->target);
			printf("price : %ld", b->price);
			b = b->next;
			printf("\n");
		}
	}
}
