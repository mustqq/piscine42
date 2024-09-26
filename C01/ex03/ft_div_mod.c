/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmustone <gmustone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:55:53 by gmustone          #+#    #+#             */
/*   Updated: 2024/09/16 16:07:30 by gmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int a, b, div, mod;

	printf("Enter the int a value: ");
	scanf("%d", &a);

	printf("Enter the int b value: ");
	scanf("%d", &b);

	ft_div_mod(a, b, &div, &mod);

	printf("The value of a divided by b is:%d\n", div);

	printf("The value of remainder division of a by b is:%d\n", mod);
	return 0;
}*/
