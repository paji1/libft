#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*p;

	p = (char *)s;
	while (*p != c && *p && n-1)
	{
		n--;
		p++;
	}
	if (!*p || n == 0)
		return (NULL);
	return ((void *)p);
}
