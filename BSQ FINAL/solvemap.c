/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:04:02 by aaires-b          #+#    #+#             */
/*   Updated: 2023/08/15 15:01:13 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int	ft_goright(int **matrix, int *ij, int lado);
int	ft_godown(int **matrix, int *ij, int lado);
int	ft_goleft(int **matrix, int *ij, int lado);
int	ft_goup(int **matrix, int *ij, int lado);

int	firstpositionindex(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i] != '\n')
		i++;
	i++;
	return (i);
}

void	assignvalues(char *buffer, int **matriz)
{
	int	i;
	int	j;
	int	l;

	i = firstpositionindex(buffer);
	l = 0;
	while (l < g_ly)
	{
		j = 0;
		while (j < g_lx + 1)
		{
			if (buffer[i + l * (g_lx + 1) + j] == g_charset[0])
				matriz[l][j] = 0; 
			else if (buffer[i + l * (g_lx + 1) + j] == g_charset[1])
				matriz[l][j] = 1; 
			else if (buffer[i + l * (g_lx + 1) + j] == g_charset[2])
				matriz[l][j] = 2; 
			j++;
		}
		l++;
	}
}

/*void	printmatrix(int **matriz)
{
	int	i;
	int	j;

	i = 0;
	while (i < g_ly)
	{
		j = 0;
		while (j < g_lx)
		{
			printf("%i" , matriz[i][j]);
			j++;
		}
		printf("\n");
	i++;
	}
}*/

int	**process_map(char *buffer)
{
	int	**matriz;
	int	i;

	matriz = (int **)malloc(sizeof(int *) * (g_ly + 1));
	matriz[g_ly] = NULL;
	i = 0;
	while (i < g_ly)
	{
		matriz[i] = (int *)malloc(sizeof(int) * (g_lx));
		i++;
	}
	assignvalues(buffer, matriz);
	return (matriz);
}

void	ft_trocarmax(int lado, int *maxlado, int *ij, int *max_ij)
{
	if (lado > *maxlado)
	{
		max_ij[0] = ij[0];
		max_ij[1] = ij[1];
		*maxlado = lado;
	}
}

void	solve_map(int **matrix, int *maxlado, int *max_ij)
{
	int	lado;
	int	ij[2];

	ij[0] = 0;
	*maxlado = 0; 
	while (ij[0] < g_ly)
	{
		ij[1] = 0;
		while (ij[1] < g_lx)
		{
			lado = 1;
			while (1)
			{
				if (ft_goright(matrix, ij, lado) || ft_godown(matrix, ij, lado) 
					|| ft_goleft(matrix, ij, lado) || ft_goup(matrix, ij, lado))
					break ;
				else
					ft_trocarmax(lado, maxlado, ij, max_ij);
				lado++;
			}
			ij[1]++;
		}
		ij[0]++;
	}
}
