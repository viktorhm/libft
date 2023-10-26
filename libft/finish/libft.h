/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viktor <viktor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:12:24 by vharatyk          #+#    #+#             */
/*   Updated: 2023/10/26 23:52:55 by viktor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stddef.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list		*ft_lstnew(void *content);
t_list 		*ft_lstlast(t_list *lst);
t_list 		*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *));

size_t		ft_strlcat(char *dest, const char *src, size_t size);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlen(const char *str);


void		*ft_memset(void *str, int value, size_t count);
void		ft_bzero(void *str, size_t count);
void		*ft_memchr(const void *memoryBlock, int searchedChar, size_t size);
void		*ft_calloc(size_t elementCount, size_t elementSize);
void		*ft_memcpy(void *dest, const void *src, size_t num);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_lstadd_back(t_list **lst, t_list *new);

void 		ft_lstadd_front(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void*));
void 		ft_lstclear(t_list **lst, void (*del)(void*));
void 		ft_lstiter(t_list *lst, void (*f)(void *));

char		*ft_strdup(const char *s);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(char const *str, int c);
char		*ft_strnstr(const char *big, const char *little, size_t len);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_itoa(int n);
char		**ft_split(char const *s, char c);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int			ft_isalpha(int c);
int			ft_isdigit(int nb);
int			ft_tolower(int chara);
int			ft_toupper(int chara);
int			ft_atoi(const char *str );
int			ft_isalnum(int character);
int			ft_isascii(int charactere);
int			ft_isprint(int character);
int			ft_strncmp(char *s1, char *s2, size_t n);
int			ft_memcmp(const void *pointer1, const void *pointer2, size_t size );
int 		ft_lstsize(t_list *lst);

#endif
