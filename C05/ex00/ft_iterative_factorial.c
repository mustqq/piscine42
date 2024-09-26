/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmustone <gmustone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:06:05 by gmustone          #+#    #+#             */
/*   Updated: 2024/09/26 13:11:44 by gmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	store;

	store = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	while (nb > 0)
	{
		store = nb * store;
		nb--;
	}
	return (store);
}

/*#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = 5;
	ft_iterative_factorial(nb);
	int	result = ft_iterative_factorial(nb);
	printf("%d", result);
}*/