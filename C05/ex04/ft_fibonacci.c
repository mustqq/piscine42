/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmustone <gmustone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:06:24 by gmustone          #+#    #+#             */
/*   Updated: 2024/09/26 11:08:10 by gmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	result;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	int counter;
	int	result;

	counter = 6;
	ft_fibonacci(counter);
	result = ft_fibonacci(counter);
	printf("%d", result);
	return (0);
}*/