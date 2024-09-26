/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlopatin <vlopatin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:11:14 by vlopatin          #+#    #+#             */
/*   Updated: 2024/09/15 18:03:24 by vlopatin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "globals.h"

int	g_board[4][4];

void	create_board(void);
int		ft_fill(int row, int col, int num);
void	print_board(void);

int	main(void)
{
	create_board();
	if (ft_fill(0, 0, 1) == 1)
		print_board();
	else
		write(1, "No solution exists\n", 19);
	return (0);
}
