/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguenzao <aguenzao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:04:17 by aguenzao          #+#    #+#             */
/*   Updated: 2024/11/25 09:47:43 by aguenzao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	overflow(int sign)
{
	if (sign == 1)
		return (-1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	unsigned long long	result;
	int					sign;
	int					i;
	unsigned long long	max;

	result = 0;
	sign = 1;
	i = 0;
	max = 9223372036854775807;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result > (max - (str[i] - 48)) / 10)
			return (overflow (sign));
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * sign);
}
