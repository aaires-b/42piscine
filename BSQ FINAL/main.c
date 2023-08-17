/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:49:09 by aaires-b          #+#    #+#             */
/*   Updated: 2023/08/16 16:03:30 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int		validate_map(char *buffer);
int		**process_map(char *buffer);
void	solve_map(int **matriz, int *maxlado, int *max_ij);
void	solved_matriz(int **matriz, int maxlado, int *max_ij);
void	print_map(int **matriz);

void	hugger_buffer3_0(char **buffer, char *filename)
{
	int	bytesread;
	int	buffersize;
	int	fileidentifier;

	bytesread = 1;
	buffersize = 1;
	while (bytesread == buffersize)
	{
		free(*buffer);
		buffersize *= 2;
		*buffer = (char *)malloc(sizeof(char) * buffersize);
		fileidentifier = open(filename, O_RDONLY);
		bytesread = read(fileidentifier, *buffer, buffersize);
		close(fileidentifier);
	}
	(*buffer)[bytesread] = '\0';
}

int	main3_0(int i, char **av)
{
	int		maxlado;
	int		max_ij[2];
	int		**matriz;
	char	*buffer;

	buffer = malloc(1);
	hugger_buffer3_0(&buffer, av[i]);
	if (validate_map(buffer) == 1)
	{
		write(2, "map error", 9);
		return (1);
	}
	matriz = process_map(buffer);
	free(buffer);
	solve_map(matriz, &maxlado, max_ij);
	solved_matriz(matriz, maxlado, max_ij);
	print_map(matriz);
	while (g_ly > 0)
	{
		free(matriz[g_ly - 1]);
		g_ly--;
	}
	free(matriz);
	return (0);
}

void	hugger_buffer2_0(char **buffer)
{
	int	bytesread;
	int	buffersize;

	buffersize = 500000000;
	free(*buffer);
	*buffer = (char *)malloc(sizeof(char) * buffersize);
	if (buffer == NULL)
		return ;
	bytesread = read(0, *buffer, buffersize);
	(*buffer)[bytesread] = '\0';
}

int	main2_0(void)
{
	int		maxlado;
	int		max_ij[2];
	int		**matriz;
	char	*buffer;

	buffer = malloc(1);
	hugger_buffer2_0(&buffer);
	if (validate_map(buffer) == 1)
	{
		write(2, "map error", 9);
		return (1);
	}
	matriz = process_map(buffer);
	free(buffer);
	solve_map(matriz, &maxlado, max_ij);
	solved_matriz(matriz, maxlado, max_ij);
	print_map(matriz);
	while (g_ly > 0)
	{
		free(matriz[g_ly - 1]);
		g_ly--;
	}
	free(matriz);
	return (0);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac <= 1)
		main2_0();
	else if (ac > 1)
	{
		i = 1;
		while (i < ac)
		{
			main3_0(i, av);
			if (i != ac - 1)
				write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
