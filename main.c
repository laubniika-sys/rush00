/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrmelo <gabrmelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 15:35:36 by gabrmelo          #+#    #+#             */
/*   Updated: 2026/03/01 19:43:12 by gabrmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include<unistd.h>

void rush(int x, int y);

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int x = atoi(argv[1]);
		int y = atoi(argv[2]);
		rush(x, y);
	}
	else
	{
		write(1, "Usage: ./rush00 <x> <y>\n", 25);
	}
	return (0);
}
