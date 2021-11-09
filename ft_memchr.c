/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-mouh <tel-mouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:10:42 by tel-mouh          #+#    #+#             */
/*   Updated: 2021/11/09 11:10:43 by tel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
