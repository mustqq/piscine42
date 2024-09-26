/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmustone <gmustone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:11:38 by gmustone          #+#    #+#             */
/*   Updated: 2024/09/22 13:20:56 by gmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				result;

	i = 0;
	if (n < 1)
		return (0);
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		result = s1[i] - s2[i];
		if (result != 0)
			return (result);
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[] = "joun";
	char	str1[] = "joUn";
	unsigned int	nbr = 3;

	ft_strncmp(str, str1, nbr);

	int	value = ft_strncmp(str, str1, nbr);
	printf("%d", value);
	return (0);
}*/