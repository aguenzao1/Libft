/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguenzao <aguenzao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:05:14 by aguenzao          #+#    #+#             */
/*   Updated: 2024/11/21 12:33:31 by aguenzao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char	*s2)
{
	int		i;
	int		j;
	char	*str3;
	int		lens1;
	int		lens2;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	i = 0;
	j = 0;
	lens1 = ft_strlen (s1);
	lens2 = ft_strlen (s2);
	str3 = (char *)malloc(lens1 + lens2 + 1);
	if (str3 == NULL)
		return (NULL);
	while (i < lens1)
		str3[i++] = s1[j++];
	j = 0;
	while (j < lens2)
		str3[i++] = s2[j++];
	return (str3[i] = '\0', str3);
}
