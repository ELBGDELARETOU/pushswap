/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:19:29 by anaouali          #+#    #+#             */
/*   Updated: 2024/01/22 17:01:46 by anaouali         ###   ########.fr       */
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

void	push_swap(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;

	if (!ft_check(argc, argv))
		return ;
	b = malloc(sizeof(t_list));
	if (!b || argc == 1)
		return ;
	b = NULL;
	ft_stock(argc, argv, &a);
	algopswp(&a, &b);
	while (b)
	{
		init(a, b);
		top_it(&a, &b);
	}
	b = smallestnode(a);
	while (b->position != 0)
	{
		if (b->under_mediane == 1)
			rotate_a(&a, 0);
		else 
			reverse_rotate_a(&a, 0);
		set_position(a);
	}
}

int	main(int argc, char **argv)
{
	push_swap(argc, argv);
}

// int	main(int argc, char **argv)
// {
// 	t_list *a;
// 	t_list *b;

// 	b = malloc(sizeof(t_list));
// 	if (!b)
// 		return (0);
// 	if (argc == 1)
// 		return (0);
// 	if (!ft_check(argc, argv))
// 		return (0);
// 	ft_stock(argc, argv, &a);
// 	algopswp(&a, &b);
// 	init(a, b);
// 	printf("|----------------------------------------------|\n");
// 	printf("                         A                       \n");
// 	printf("|----------------------------------------------|\n");
// 	while (a)
// 	{
// 		if (a)
// 		{
// 			printf("content : %ld ", a->content);
// 			printf("mediane : %ld ", a->under_mediane);
// 			printf("position : %ld ", a->position);
// 			printf("price : %ld", a->price);
// 			printf("\n");
// 			a = a->next;
// 		}
// 	}
// 	printf("                                  B                                    \n");
// 	printf("|--------------------------------------------------------------------|\n");
// 	while (b->next)
// 	{
// 		if (b)
// 		{
// 			printf("content : %ld ", b->content);
// 			printf("mediane : %ld ", b->under_mediane);
// 			printf("position : %ld ", b->position);
// 			// printf("target : %ld ", b->target->content);
// 			printf("price : %ld ", b->price);
// 			printf("cheapest : %ld", b->cheapest);

// 			b = b->next;
// 			printf("\n");
// 		}
// 	}
// }
