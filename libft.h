#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
	void	ft_bzero(void *s, size_t n);
	int	ft_isalnum(int c);
	int	ft_isalpha(int c);
	int	ft_isascii(int c);
	int	ft_isdigit(int c);
	int	ft_isprint(int c);
	int	ft_toupper(int c);
	int	ft_tolower(int c);
	int	ft_atoi(const char *str);
	int	ft_strncmp(const char *s1, const char *s2, size_t n);
	int	ft_memcmp(const void *s1, const void *s2, size_t n);
	char	*ft_strdup(const char *s1);
	char	*ft_strtrim(char const *s1, char const *set);
	void	*ft_memchr(const void *s, int c, size_t n);
	char	*ft_strchr(const char *s, int c);
	char	*ft_strrchr(const char *s, int c);
	char	*ft_strnstr(const char *haystack,const char *needle,size_t len);
	char	*ft_substr(char const *s, unsigned int start,size_t len);
	void	*ft_memset(void *b, int c, size_t len);
	char	**ft_split(char const *s, char c);
	size_t	ft_strlen(const char *s);
	size_t	ft_strlcpy(char * dst, const char * src, size_t dstsize);
	size_t	ft_strlcat(char * dst, const char * src, size_t dstsize);

#endif
