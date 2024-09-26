/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmustone <gmustone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:03:20 by gmustone          #+#    #+#             */
/*   Updated: 2024/09/19 14:28:02 by gmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
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
	char	str[] = "";
	char	str1[] = "abcdefg";
	char	str2[] = "aBcd2";
	char	str3[] = "12345a";
	char	str4[] = "12345A";
	char	str5[] = "Abcdef";
	ft_str_is_alpha(str);
	printf("%d", ft_str_is_alpha(str));
	printf("%d", ft_str_is_alpha(str1));
	printf("%d", ft_str_is_alpha(str2));
	printf("%d", ft_str_is_alpha(str3));
	printf("%d", ft_str_is_alpha(str4));
	printf("%d", ft_str_is_alpha(str5));
}*/
