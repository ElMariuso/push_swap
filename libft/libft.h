/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiry <mthiry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 12:49:38 by mthiry            #+#    #+#             */
/*   Updated: 2022/05/04 17:26:10 by mthiry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdarg.h>
# include <limits.h>
# include <string.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *str);
long	ft_atolo(const char *str);

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strdup(const char *s1);
char	*ft_freestrdup(char *s1);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_calloc(size_t count, size_t size);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *s2);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	**ft_split(char const *s, char c);
char	**ft_split_add(char **args);

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **alst, t_list *new_c);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **alst, t_list *new_c);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

char	*ft_freestrjoin(char const *s1, char const *s2);
char	*get_next_line(int fd);

int		ft_c_displaying(va_list args, int j);
int		ft_s_displaying(va_list args, int j);
int		ft_p_displaying(va_list args, int j);
int		ft_d_and_i_displaying(va_list args, int j);
int		ft_u_displaying(va_list args, int j);
int		ft_x_displaying(va_list args, int j);
int		ft_x_up_displaying(va_list args, int j);
int		ft_percent_displaying(int j);

int		ft_check_format(const char	*format, va_list args, int i, int j);
int		ft_check_next_char(const char *format, int i);

int		ft_printf(const char	*format, ...);

int		ft_strcmp(const char *s1, const char *s2);

int		ft_8bit_binary_to_int(char	*bin);

char	*ft_int_to_8bit_binary(int c);
char	*ft_int_to_hexa(int c);
char	*ft_u_int_to_hexa(unsigned int c);
char	*ft_void_to_hexa(unsigned long int c);

char	*ft_int_to_hexa_pos(unsigned long int c);
char	*ft_int_to_hexa_neg(int c);

char	*ft_utoa(unsigned int n);
#endif
