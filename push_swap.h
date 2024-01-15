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
	int				position;
	int				content;
	int				under_mediane;
	int				price;
	
	struct s_list	*target;
	struct s_list	*next;
	struct s_list	*prev;

}					t_list;

long				ft_atoi(char *str);
int					ft_check(int argc, char **argv);
int					ft_check_doubles(int argc, char **argv, int check);
int					ft_isalpha(char *str);
int					ft_check_letters(int argc, char **argv, int check);
char				**ft_split(char const *str, char c);
static char			*ft_get_next_words(int *index, char const *str, char c);
static int			ft_count_words(char const *str, char c);
static int			ft_char_is_in_str(char const *str, char c);
static void			my_free_all(char **res, int len);
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
void     			set_position(t_list *a);
void 				set_target(t_list *a, t_list *b);
int					isthesmallest(t_list *a);
void 				algopswp(t_list **a, t_list **b);


void				reverse_rotate_a(t_list **lst);
void				reverse_rotate_b(t_list **lst);

void				rotate_a(t_list **lst);
void				rotate_b(t_list **lst);

void				swap_a(t_list **a);
void				swap_b(t_list **a);

void				push_a(t_list **a, t_list **b);
void				push_b(t_list **a, t_list **b);

#endif