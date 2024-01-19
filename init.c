#include "push_swap.h"

void	set_position(t_list *a)
{
	int	i;
	int	mediane;

	if (!a)
		return ;
	mediane = lst_size(a) / 2;
	i = 0;
	while (a)
	{
		a->position = i;
		if (i <= mediane)
			a->under_mediane = 1;
		else
			a->under_mediane = 0;
		a = a->next;
		i++;
	}
}

void	set_target(t_list *a, t_list *b)
{
	t_list		*current_a;
	t_list		*target_node;
	long int	max;

	while (b)
	{
		current_a = a;
		max = LONG_MAX;
		while (current_a)
		{
			if (current_a->content > b->content && current_a->content < max)
			{
				max = current_a->content;
				target_node = current_a;
			}
			current_a = current_a->next;
		}
		if (max == LONG_MAX)
			b->target = smallestnode(a);
		else
			b->target = target_node;
		b = b->next;
	}
}

void	set_price(t_list *a, t_list *b)
{
	long int	i;

	i = 0;
	while (b)
	{
		if (b->under_mediane == 1)
			b->price = (i++);
		if (b->under_mediane == 0)
			b->price = (--i);
		b = b->next;
	}
	i = 0;
	while (a)
	{
		if (a->under_mediane == 1)
			a->price = (i++);
		if (a->under_mediane == 0)
			a->price = (--i);
		a = a->next;
	}
}

void	set_cheapest(t_list *a, t_list *b)
{
	t_list		*cheapest;
	long int	cost;

	cost = LONG_MAX;
	while (b)
	{
		if (b->price < cost)
		{
			cost = b->price;
			cheapest = b;
		}
		b = b->next;
	}
	cheapest->cheapest = 1;
}

void	init(t_list *a, t_list *b)
{
	set_position(a);
	set_position(b);
	set_target(a, b);
	set_price(a, b);
	set_cheapest(a, b);
}