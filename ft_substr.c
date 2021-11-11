/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-mouh <tel-mouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:08:48 by tel-mouh          #+#    #+#             */
/*   Updated: 2021/11/10 15:54:23 by tel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,size_t len)
{
	char	*p;
	
	if (!s)
		return 0;
	p = (char *)malloc(len+1);
	if(p == NULL)
		return NULL;
	if (ft_strlen(s)<=start)
	{
		*p = 0;
		return p;
	}
	ft_strlcpy(p,s+start,len+1);
	return p;
}