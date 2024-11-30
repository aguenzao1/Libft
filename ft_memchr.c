/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguenzao <aguenzao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:25:01 by aguenzao          #+#    #+#             */
/*   Updated: 2024/11/20 11:46:11 by aguenzao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void	*s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		v;
	size_t				i;

	i = 0;
	p = (const unsigned char *)s;
	v = (unsigned char)c;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (p[i] == v)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}
