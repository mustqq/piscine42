/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmustone <gmustone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:06:18 by gmustone          #+#    #+#             */
/*   Updated: 2024/09/26 11:00:30 by gmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
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
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	int nbr;
	int pwr;
	int answer;

	nbr = 1;
	pwr = 0;
	ft_iterative_power(nbr, pwr);
	answer = ft_iterative_power(nbr, pwr);
	printf("%d", answer);
}*/