/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmustone <gmustone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:06:21 by gmustone          #+#    #+#             */
/*   Updated: 2024/09/26 11:07:31 by gmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (nb == 0 && power == 0)
	{
		return (1);
	}
	if (power > 0)
		result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	int	nbr;
	int	pwr;
	int	answer;

	nbr = 0;
	pwr = 5;
	ft_recursive_power(nbr, pwr);
	answer = ft_recursive_power(nbr, pwr);
	printf("%d", answer);
	return (0);
}*/