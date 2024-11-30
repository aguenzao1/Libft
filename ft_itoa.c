/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguenzao <aguenzao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:15:38 by aguenzao          #+#    #+#             */
/*   Updated: 2024/11/25 09:53:10 by aguenzao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	arr[12];
	int		i;
	long	b;
	int		division;

	b = n;
	if (n == 0)
		return (ft_strdup("0"));
	if (b < 0)
		b *= -1;
	i = 0;
	division = 1000000000;
	arr[0] = '0';
	while (++i <= 10)
	{
		arr[i] = (b / division) + '0';
		b %= division;
		division /= 10;
	}
	i = 0;
	while (arr[i] == '0')
		i++;
	if (n < 0)
		arr[--i] = '-';
	return (arr[11] = '\0', ft_strdup(&arr[i]));
}
