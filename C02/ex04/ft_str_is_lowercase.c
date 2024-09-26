/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmustone <gmustone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:24:04 by gmustone          #+#    #+#             */
/*   Updated: 2024/09/19 14:28:41 by gmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
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
	char str[] = "aZ";
	char	str1[] = "abcdefg";
	char	str2[] = "aBcd2";
	char	str3[] = "12345a";
	char	str4[] = "12345A";
	char	str5[] = "Abcdef";
	printf("%d", ft_str_is_lowercase(str));
	printf("%d", ft_str_is_lowercase(str1));
	printf("%d", ft_str_is_lowercase(str2));
	printf("%d", ft_str_is_lowercase(str3));
	printf("%d", ft_str_is_lowercase(str4));
	printf("%d", ft_str_is_lowercase(str5));
}*/
