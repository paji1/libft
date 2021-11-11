/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-mouh <tel-mouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:10:42 by tel-mouh          #+#    #+#             */
/*   Updated: 2021/11/09 11:46:13 by tel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (*p != (unsigned char)c && *p && n)
	{
		n--;
		p++;
	}
	if (!c)
		return ((void *)p);
	if (!*p || n == 0)
		return (NULL);
	return ((void *)p);
}
