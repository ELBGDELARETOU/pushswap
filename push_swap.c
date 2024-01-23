/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademnaouali <ademnaouali@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:19:29 by anaouali          #+#    #+#             */
/*   Updated: 2024/01/24 00:58:17 by ademnaouali      ###   ########.fr       */
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
void	stock_one(char **argv, t_list **a)
{
	t_list *new;
	t_list *next = NULL;
    char **split;
	int	i;
	
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
	return ;
}

int	main(int argc, char **argv)
{
	t_list	*a = NULL;
	t_list	*b = NULL;

	if (argc == 1 || (!ft_check(argc, argv)))
		return (0);
	if (argc == 2)
		stock_one(argv, &a);
	else 
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
	return (0);
}
