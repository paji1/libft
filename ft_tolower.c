#include "libft.h"
int	ft_tolower(int c)
{
	if(ft_isalpha(c))
		if (c <= 90)
			c += 32;
	return (c);
}
