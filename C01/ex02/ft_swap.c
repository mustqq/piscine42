/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmustone <gmustone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:35:13 by gmustone          #+#    #+#             */
/*   Updated: 2024/09/16 16:07:17 by gmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int nbr1 = 8;
	int nbr2 = 4;

	printf("%d %d\n", nbr1, nbr2);

	ft_swap(&nbr1, &nbr2);

	printf("%d %d\n", nbr1, nbr2);
	return 0;	
}*/
