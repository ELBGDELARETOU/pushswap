/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:19:29 by anaouali          #+#    #+#             */
/*   Updated: 2024/01/26 18:43:49 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_lst(t_list *a)
{
	t_list	*tmp;

	while (a)
	{
		tmp = a->next;
		free(a);
		a = tmp;
	}
}

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

void	stock_one(char **argv, t_list **a)
{
	t_list	*new;
	t_list	*next;
	char	**split;
	int		i;

	next = NULL;
	i = 0;
	split = ft_split(argv[1], ' ');
	while (split[i] != NULL)
	{
		new = malloc(sizeof(t_list));
		if (!new)
			return ;
		new->content = ft_atoi(split[i]);
		new->next = NULL;
		if (*a == NULL)
			*a = new;
		else
			next->next = new;
		next = new;
		i++;
	}
	my_free_all(split, str_size(split));
	return ;
}

int	first_step(int argc, char **argv, t_list **a, t_list **b)
{
	char	**tmp;

	if (argc == 1 || (!ft_check(argc, argv)))
		return (0);
	if (argc == 2)
		stock_one(argv, a);
	else
		ft_stock(argc, argv, a);
	if (sorted(*a))
	{
		free_lst(*a);
		return (0);
	}
	while (lst_size(*a) >= 3 || (!sorted(*a)))
		push_b(a, b);
	ft_algo3(a);
	return (1);
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (!first_step(argc, argv, &a, &b))
		return (0);
	// init(a, b);
	// printf("|----------------------------------------------|\n");
	// printf("                         A                       \n");
	// printf("|----------------------------------------------|\n");
	// while (a)
	// {
	// 	if (a)
	// 	{
	// 		printf("content : %ld ", a->content);
	// 		printf("mediane : %ld ", a->under_mediane);
	// 		printf("position : %ld ", a->position);
	// 		printf("price : %ld", a->price);
	// 		printf("\n");
	// 		a = a->next;
	// 	}
	// }
	// printf("                                  B                                    \n");
	// printf("|--------------------------------------------------------------------|\n");
	// while (b)
	// {
	// 	if (b)
	// 	{
	// 		printf("content : %ld ", b->content);
	// 		printf("mediane : %ld ", b->under_mediane);
	// 		// printf("position : %ld ", b->position);
	// 		printf("price : %ld ", b->price);
	// 		printf("cheapest : %ld", b->cheapest);

	// 		b = b->next;
	// 		printf("\n");
	// 	}
	// }
	while (b)
	{
		init(a, b);
		top_it(&a, &b);
	}
	set_position(a);
	b = smallestnode(a);
	while (b->position != 0)
	{
		if (b->under_mediane == 1)
			rotate(&a, 0);
		else
			reverse_rotate(&a, 0);
		set_position(a);
	}
	free_lst(a);
	return (0);
}
