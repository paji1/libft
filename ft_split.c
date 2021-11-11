/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-mouh <tel-mouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 19:39:18 by tel-mouh          #+#    #+#             */
/*   Updated: 2021/11/11 06:59:44 by tel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	countwords(const char *s, char c)
{
	int	i;
	int	t;

	i = -1;
	t = 0;
	while (s[++i])
	{
		if (s[i] == c && (s[i + 1] != c && s[i + 1]))
			t++;
		if (!i && s[i] != c)
			t++;
	}
	return (t);
}

static	int	*countab(const char *s, char c)
{
	int	*tab;
	int	i;
	int	t;
	int	r;

	s = ft_strtrim(s, " ");
	tab = (int *)malloc(sizeof(int) * countwords(s, c));
	i = -1;
	t = 0;
	r = 0;
	while (s[++i])
	{
		if (s[i] == c)
		{
			if (s[i + 1] != c)
			{
				tab[t++] = r;
				r = 0;
			}	
		}
		else
			r++;
	}
	tab[t] = r;
	return (tab);
}

static	int	assign(int *i ,int *t,char **tab)
{
	if (!tab)
		return 0;
	*i = -1;
	*t = 0;
	return 1;
}
static	void assign2(int *nums,char **tab,int t)
{
	tab[t] = NULL;
	free(nums);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	int	t;
	int	r;
	char	**tab;
	int		*nums;

	if (!s)
		return NULL;
	tab  = malloc(sizeof(char *)*(countwords(s, c)+1));
	if(!assign(&i,&t,tab))
		return NULL;
	nums = countab(s, c);
	while (s[++i])
	{
		if	(s[i] != c && t < countwords(s, c))
		{
			tab[t] = malloc(nums[t]+1);
			r = -1;
			while (++r < nums[t])
				tab[t][r] = s[i++];
			tab[t++][r] = 0;
		}
	}
	assign2(nums,tab,t);
	return tab;
}