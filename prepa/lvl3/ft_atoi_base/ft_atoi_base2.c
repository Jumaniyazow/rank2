/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjumaniy <sjumaniy@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 18:51:56 by sjumaniy          #+#    #+#             */
/*   Updated: 2026/01/11 18:52:06 by sjumaniy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_base(const char *str, int base)
{
	char	*number;
	int		result;
	int		sign;
	int		i;

	i = 0;
	sign = 1;
	number = (char *)str;
	if (number[i] == '-')
	{
		sign *= -1;
		i++;
	}
	result = 0;
	while (number[i] != '\0')
	{
		if (number[i] >= '0' && number[i] <= '9')
			result = result * base + number[i] - '0';
		else if (number[i] >= 'A' && number[i] <= 'F')
			result = result * base + number[i] - '7';
		else if (number[i] >= 'a' && number[i] <= 'f')
			result = result * base + number[i] - 'W';
		i++;
	}
	return (sign * result);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi_base("-aa", 16));
	return (0);
}
*/