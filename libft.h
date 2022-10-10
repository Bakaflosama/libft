#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>

int     ft_isalpha(int c);

int     ft_isdigit(int c);

int     ft_isalnum(int c);

int     ft_isascii(int c);

int     ft_isprint(int c);

int	    ft_toupper(int c);

int	    ft_tolower(int c);

int     ft_atoi(const char *str);

void    *ft_memset(void *s, int c, size_t n);

void	ft_bzero(void *s, size_t n);

size_t	ft_strlen(const char *str);

size_t	ft_strlcat(char *dest, const char *src, size_t size);

void	*ft_memcpy(void *dst, const void *src, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t len);

#endif