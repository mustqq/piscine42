/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlopatin <vlopatin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:12:13 by vlopatin          #+#    #+#             */
/*   Updated: 2024/09/15 18:02:34 by vlopatin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globals.h"

int	ft_check(int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (g_board[row][i] == num)
			return (0);
		else
			i++;
	}
	i = 0;
	while (i < row)
	{
		if (g_board[i][col] == num)
			return (0);
		else
			i++;
	}
	return (1);
}
