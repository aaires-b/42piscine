/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:12:30 by aaires-b          #+#    #+#             */
/*   Updated: 2023/08/15 15:07:47 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

void	solved_matriz(int **matrix, int maxlado, int *max_ij)
{
	int	i;
	int	j;

	i = max_ij[0];
	while (i < max_ij[0] + maxlado)
	{
		j = max_ij[1];
		while (j < max_ij[1] + maxlado)
		{
			matrix[i][j] = 2;
			j++;
		}
		i++;
	}
}

void	print_map(int **matriz)
{
	int	i;
	int	j;

	i = 0;
	while (i < g_ly)
	{
		j = 0;
		while (j < g_lx)
		{
			write(1, &g_charset[matriz[i][j]], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
