/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatashka <fatashka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 21:13:17 by fatashka          #+#    #+#             */
/*   Updated: 2024/09/08 21:13:32 by fatashka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	print_line(int width, char first_char, char mid_char, char last_char)
{
	int	col_num;

	col_num = 1;
	ft_putchar(first_char);
	while (col_num <= width - 2)
	{
		ft_putchar(mid_char);
		col_num++;
	}
	if (width >= 2)
		ft_putchar(last_char);
	ft_putchar('\n');
}

void	rush(int width, int height)
{
	int	row_num;

	row_num = 1;
	if (width > 0 && height > 0)
	{	
		print_line(width, 'A', 'B', 'C');
		while (row_num <= height - 2)
		{
			print_line(width, 'B', ' ', 'B');
			row_num++;
		}
		if (height >= 2)
		{
			print_line(width, 'c', 'B', 'A');
		}
	}
}
