/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguenzao <aguenzao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:30:58 by aguenzao          #+#    #+#             */
/*   Updated: 2024/11/23 09:44:03 by aguenzao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	isin_set(char c, const char	*set)
{
	int	i;

	if (set == NULL)
		return (0);
	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char	*s1, const char *set)
{
	size_t	start;
	size_t	end;
	char	*newstr;
	size_t	i;

	i = 0;
	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && isin_set(s1[start], set))
		start++;
	while ((end > start) && isin_set(s1[end - 1], set))
		end--;
	newstr = (char *)malloc(end - start + 1);
	if (newstr == NULL)
		return (NULL);
	while (i < end - start)
	{
		newstr[i] = s1[start + i];
		i++;
	}
	return (newstr[i] = '\0', newstr);
}
