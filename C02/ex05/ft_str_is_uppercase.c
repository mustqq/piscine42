/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmustone <gmustone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:33:43 by gmustone          #+#    #+#             */
/*   Updated: 2024/09/19 14:28:57 by gmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
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
	char	str[] = "ABCDEFG";
	char	str1[] = "abcdefg";
	char	str2[] = "aBcd2";
	char	str3[] = "12345a";
	char	str4[] = "12345A";
	char	str5[] = "Abcdef";
	printf("%d \n", ft_str_is_uppercase(str));
	printf("%d \n", ft_str_is_uppercase(str1));
	printf("%d \n", ft_str_is_uppercase(str2));
	printf("%d \n", ft_str_is_uppercase(str3));
	printf("%d \n", ft_str_is_uppercase(str4));
	printf("%d \n", ft_str_is_uppercase(str5));
}*/
