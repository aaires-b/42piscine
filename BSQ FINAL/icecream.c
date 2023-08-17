/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gelados.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:42:06 by aaires-b          #+#    #+#             */
/*   Updated: 2023/08/15 15:05:55 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int	ft_goright(int **matrix, int *ij, int lado)
{
	int	desvio_d;

	desvio_d = 0;
	if (ij[0] + lado - 1 >= g_ly || ij[1] + lado - 1 >= g_lx)
		return (1);
	while (desvio_d < lado)
	{
		if (matrix[ij[0]][ij[1] + desvio_d] == 1)
			return (1);
		desvio_d++;
	}
	return (0);
}

int	ft_godown(int **matrix, int *ij, int lado)
{
	int	desvio_b;

	desvio_b = 0;
	while (desvio_b < lado)
	{
		if (matrix[ij[0] + desvio_b][ij[1] + lado - 1] == 1)
			return (1);
		desvio_b++;
	}
	return (0);
}

int	ft_goleft(int **matrix, int *ij, int lado)
{
	int	desvio_l;

	desvio_l = lado - 1;
	while (desvio_l >= 0)
	{
		if (matrix[ij[0] + lado - 1][ij[1] + desvio_l] == 1)
			return (1);
		desvio_l--;
	}
	return (0);
}

int	ft_goup(int **matrix, int *ij, int lado)
{
	int	desvio_up;

	desvio_up = lado - 1;
	while (desvio_up >= 0)
	{
		if (matrix[ij[0] + desvio_up][ij[1]] == 1)
			return (1);
		desvio_up--;
	}
	return (0);
}
