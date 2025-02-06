/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfrankie <sfrankie@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 19:35:49 by sfrankie          #+#    #+#             */
/*   Updated: 2024/01/12 17:48:05 by sfrankie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>
# include <limits.h>

// get_next_line
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*extract_line(char *chest, int i);
char	*get_next_line(int fd);
char	*read_file(char *chest, int fd);
char	*update_chest(char *chest);

// ft_printf
//int		check_args(const char *str, va_list *args);
int		ft_choose_format(va_list *args, const char sign);
int		ft_hexalen(size_t n);
int		ft_nbrlen(int n);
int		ft_printchar(int c);
int		ft_printf(const char *str, ...);
int		ft_printhexa(unsigned int n, const char sign);
int		ft_printpercent(void);
int		ft_printptr(unsigned long ptr);
int		ft_printstr(char *str);
int		ft_printunbr(unsigned int n);
int		ft_printnbr(int n);
int		ft_ptrlen(uintptr_t n);
void	ft_puthexa(uintptr_t n);
void	ft_putsizedhexa(unsigned int n, const char format);
void	ft_putunbr_fd(unsigned int n, int fd);
int		ft_unbrlen(unsigned int n);

int		ft_atoi(const char *str);
void	*ft_bzero(void *str, size_t length);
void	*ft_calloc(size_t n, size_t size);
int		ft_isalnum(int i);
int		ft_isalpha(int i);
int		ft_isascii(int i);
int		ft_isdigit(int i);
int		ft_isprint(int i);
char	*ft_itoa(int n);
void	*ft_memchr(const void *str, int x, size_t size);
int		ft_memcmp(const void *str1, const void *str2, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t length);
void	*ft_memmove(void *dest, const void *src, size_t numofbytes);
void	*ft_memset(void *str, int i, size_t length);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *str, int x);
char	*ft_strdup(const char *str);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *str);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *str1, const char *str2, size_t size);
char	*ft_strnstr(const char *big, const char *little, size_t size);
char	*ft_strrchr(const char *str, int x);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_tolower(int x);
int		ft_toupper(int x);

// typedef - to create an additional name (alias) for another data type
// struct - a composite data type (or record) declaration that defines a
//  physically grouped list of variables under one name in a block of memory
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);

#endif