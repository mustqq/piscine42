/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlopatin <vlopatin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:12:40 by vlopatin          #+#    #+#             */
/*   Updated: 2024/09/15 18:06:34 by vlopatin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "globals.h"

int	ft_check(int row, int col, int num);

int	ft_fill(int row, int col, int num)
{
	if (row == 4)								//when last spot is reached this will start going back towards main
		return (1);
	if (col == 4)								//when row is full, move to the next row
		return (ft_fill(row + 1, 0, 1));
	while (num <= 4)
	{
		if (ft_check(row, col, num) == 1)			//here are checks made (conditions). This will get false if any condition is not met in next level on recursion
		{
			g_board[row][col] = num;				//fill with current number
			if (ft_fill(row, col + 1, 1) == 1)		//after filling the spot move to next column and pass starging number to begin with
				return (1);							//if the whole board is filled correctly this is the path back to main
			g_board [row][col] = 0;					//if any condition is not met, erase and backtrack
		}
		num++;
	}
	return (0); //if none of numbers can be placed
}
