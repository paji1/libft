#include "libft.h"
size_t	ft_strlcpy(char * dst, const char * src, size_t dstsize)
{
	size_t	t;

	t = 0;

	if (!dstsize)
		return ft_strlen(src);
	while (src[t] && dstsize - 1)
	{
		dst[t] = src[t];
		t++;
		dstsize--;
	}
	dst[t] = 0;
	return ft_strlen(src);
}
