/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmustone <gmustone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:36:58 by gmustone          #+#    #+#             */
/*   Updated: 2024/09/16 12:22:19 by gmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	store1;
	int	store2;

	store1 = *a / *b;
	store2 = *a % *b;
	*a = store1;
	*b = store2;
}

/*int	main(void)
{
	int	x = 5;
	int	y = 3;
	ft_ultimate_div_mod(&x, &y);
	printf("%d\n", x);
        printf("%d\n", y);
	return 0;
}*/
