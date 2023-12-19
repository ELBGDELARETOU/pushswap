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
	int				content;
	struct s_list	*next;
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

#endif