/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmustone <gmustone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:06:27 by gmustone          #+#    #+#             */
/*   Updated: 2024/09/26 11:18:43 by gmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	multiply;
	int	result;

	result = 0;
	multiply = 0;
	if (nb <= 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	while (nb > result)
	{
		result = multiply * multiply;
		if (result == nb)
			return (multiply);
		else
			multiply++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	int nbr;

	nbr = 16;
	ft_sqrt(nbr);
	printf("%d", ft_sqrt(nbr));
}*/