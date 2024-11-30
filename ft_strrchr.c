/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguenzao <aguenzao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:37:08 by aguenzao          #+#    #+#             */
/*   Updated: 2024/11/19 18:23:07 by aguenzao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*s, int c)
{
	int		i;
	char	target;

	target = (char)c;
	i = ft_strlen(s);
	if (target == '\0')
		return ((char *)&s[i]);
	while (i >= 0)
	{
		if (s[i] == target)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
