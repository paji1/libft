/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-mouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 09:51:00 by tel-mouh          #+#    #+#             */
/*   Updated: 2021/11/05 10:29:35 by tel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	t;
	size_t	j;

	i = -1;
	t = 0;
	j = 0;
	while (s[++i])
		if (s[i] == (char)c)
		{
			t = i;
			j = 1;
		}
	if (!c)
		return ((char *)(s+i));
	if (!j)
		return (NULL);
	return ((char *)(s + t));
}
