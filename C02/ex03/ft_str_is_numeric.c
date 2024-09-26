/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmustone <gmustone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:39:44 by gmustone          #+#    #+#             */
/*   Updated: 2024/09/19 14:28:23 by gmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[] = "-1";
	char	str1[] = "abcdefg";
	char	str2[] = "aBcd2";
	char	str3[] = "12345a";
	char	str4[] = "12345A";
	char	str5[] = "Abcdef";
	printf("%d", ft_str_is_numeric(str));
	printf("%d", ft_str_is_numeric(str1));
	printf("%d", ft_str_is_numeric(str2));
	printf("%d", ft_str_is_numeric(str3));
	printf("%d", ft_str_is_numeric(str4));
	printf("%d", ft_str_is_numeric(str5));
}*/
