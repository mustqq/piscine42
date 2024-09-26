/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmustone <gmustone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:07:50 by gmustone          #+#    #+#             */
/*   Updated: 2024/09/21 15:40:32 by gmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	result;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		result = s1[i] - s2[i];
		if (result != 0)
			return (result);
		i++;
	}
	result = s1[i] - s2[i];
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	char	str1[] = "Juoppo";
	char	str2[] = "Juoppo Hullu";
	int kalle = ft_strcmp(str1, str2);
	printf("%d", kalle);
	return (0);
}*/