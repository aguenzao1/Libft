/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguenzao <aguenzao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:57:50 by aguenzao          #+#    #+#             */
/*   Updated: 2024/11/23 09:42:56 by aguenzao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *s, char c)
{
	int	i;
	int	count;
	int	b;

	i = 0;
	count = 0;
	b = 0;
	if (s == NULL)
		return (0);
	while (s[i])
	{
		if (s[i] != c && b == 0)
		{
			b = 1;
			count++;
		}
		else if (s[i] == c)
			b = 0;
		i++;
	}
	return (count);
}

void	ft_free_split(char	**words)
{
	int	i;

	i = 0;
	while (words[i] != NULL)
	{
		free(words[i]);
		i++;
	}
	free (words);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		i;
	int		wc;
	int		wi;
	int		wl;

	i = 0;
	wi = 0;
	wc = count_word(s, c);
	p = (char **)malloc(sizeof(char *) * (wc + 1));
	if (p == NULL)
		return (NULL);
	while (wi < wc)
	{
		while (s[i] == c)
			i++;
		wl = 0;
		while (s[i + wl] && s[i + wl] != c)
			wl++;
		p[wi] = ft_substr(s, i, wl);
		if (p[wi++] == NULL)
			return (ft_free_split(p), NULL);
		i += wl;
	}
	return (p[wi] = NULL, p);
}
