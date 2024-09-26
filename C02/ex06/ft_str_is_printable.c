/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmustone <gmustone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:00:07 by gmustone          #+#    #+#             */
/*   Updated: 2024/09/19 14:29:13 by gmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
	char	str[] = "abc";
	char	str1[] = "abcD";
	char	str2[] = "abcD1";
	char	str3[] = "123b";
	char	str4[] = "";
	char	str5[] = "\n";
	printf("%d \n", ft_str_is_printable(str));
	printf("%d \n", ft_str_is_printable(str1));
	printf("%d \n", ft_str_is_printable(str2));
	printf("%d \n", ft_str_is_printable(str3));
	printf("%d \n", ft_str_is_printable(str4));
	printf("%d \n", ft_str_is_printable(str5));
}*/
