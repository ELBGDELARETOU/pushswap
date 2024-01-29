/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:27:47 by anaouali          #+#    #+#             */
/*   Updated: 2024/01/29 19:06:19 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <fcntl.h>
# include <limits.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_list
{
	long int		position;
	long int		content;
	long int		under_mediane;
	long int		price;
	long int		cheapest;

	struct s_list	*target;
	struct s_list	*next;
	struct s_list	*prev;

}					t_list;

long				ft_atoi(char *str);
int					ft_check(int argc, char **argv);
int					ft_check_double(int argc, char **argv, int check);
int					ft_isalpha(char *str);
int					ft_check_letter(int argc, char **argv, int check);
char				**ft_split(char const *str, char c);
static char			*ft_get_next_words(int *index, char const *str, char c);
static int			ft_count_words(char const *str, char c);
static int			ft_char_is_in_str(char const *str, char c);
void				my_free_all(char **res, int len);
int					tl(char **str);
int					ft_isaout(char *str);
void				ft_stock(int argc, char **argv, t_list **list);
void				ft_lstadd_back(t_list **lst, t_list *new);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					check_end(t_list *a, t_list *b);
void				ft_algo2(t_list **a, t_list **b);
void				ft_target(t_list *a, t_list **b);
int					ft_check(int argc, char **argv);
int					lst_size(t_list *a);
void				ft_algo3(t_list **a);
int					isthebiggest(t_list *a);
void				set_position(t_list *a);
void				set_target(t_list *a, t_list *b);
int					isthesmallest(t_list *a);
void				init(t_list *a, t_list *b);
void				set_price(t_list *a, t_list *b);
t_list				*smallestnode(t_list *a);
t_list				*bigestnode(t_list *a);
void				rrr(t_list **a, t_list **b);
void				rr(t_list **a, t_list **b);
void				set_cheapest(t_list *a, t_list *b);
void				finish_a(t_list **a, t_list *top);
void				finish_b(t_list **a, t_list *top);
void				top_it(t_list **a, t_list **b);
t_list				*cheapest_node(t_list *b);
int					sorted(t_list *a);
int					str_size(char **str);
int					first_step(int argc, char **argv, t_list **a, t_list **b);
void				free_lst(t_list *a);
int					ft_check_one_arg(int argc, char **argv);
void				ft_algo5(t_list **a, t_list **b);
void				setto_zero(t_list *b);
void				pricring(t_list *a, t_list *b, int len_a, int len_b);
void				top_itbis(t_list **a, t_list **b, t_list *cheapest);

void				reverse_rotate(t_list **lst, int rrr);
void				rotate(t_list **lst, int rr);
void				swap(t_list **a, int swap);
void				push_a(t_list **a, t_list **b);
void				push_b(t_list **a, t_list **b);

#endif