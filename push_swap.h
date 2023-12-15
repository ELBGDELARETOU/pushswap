#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <fcntl.h>
# include <limits.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
int					ft_isdigit(long int c);
int					ft_atoi(const char *str);
int					ft_check_int(int argc, char **argv);
int					ft_check(int argc, char **argv);
void				ft_stock(int argc, char **argv);
void				ft_stock(int argc, char **argv);
t_list				*ft_lstnew(void *content);
int					ft_check_doubles(int argc, char **argv);
int					ft_isalpha(char *str);
int					ft_check_letters(int argc, char **argv);

#endif