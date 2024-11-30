/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguenzao <aguenzao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:45:11 by aguenzao          #+#    #+#             */
/*   Updated: 2024/11/27 14:29:07 by aguenzao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t	count, size_t	size)
{
	size_t	res;
	char	*p;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	res = count * size;
	p = (char *)malloc(res);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, res);
	return ((void *)p);
}
