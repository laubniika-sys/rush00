/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrmelo <gabrmelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 15:36:08 by gabrmelo          #+#    #+#             */
/*   Updated: 2026/03/01 19:26:46 by gabrmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_char(int x, int y, int col, int lin)
{
	if ((lin == 0 || lin == y - 1) && (col == 0 || col == x - 1))
	{
		if (lin == 0)
			ft_putchar('A');
		else
			ft_putchar('C');
	}
	else if (lin == 0 || lin == y - 1 || col == 0 || col == x - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	col;
	int	lin;

	if (x <= 0 || y <= 0)
		return ;
	lin = 0;
	while (lin < y)
	{
		col = 0;
		while (col < x)
		{
			print_char(x, y, col, lin);
			col++;
		}
		ft_putchar('\n');
		lin++;
	}
}
