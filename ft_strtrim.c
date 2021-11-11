/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-mouh <tel-mouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:20:53 by tel-mouh          #+#    #+#             */
/*   Updated: 2021/11/10 19:33:23 by tel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t len;

	if (!s1)
		return NULL;
	if (!*s1)
		return (char *)s1;
	while(ft_strchr(set,*s1) && *s1)
		s1++;
	if (!*(s1))
		return (char *)s1;
	len = ft_strlen(s1);
	while (ft_strchr(set,s1[len-1]))
		len--;
	return ft_substr(s1,0,len);	
}