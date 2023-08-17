/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsqmain.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 09:28:42 by aaires-b          #+#    #+#             */
/*   Updated: 2023/08/15 14:50:58 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int		g_lx;
int		g_ly;
char	g_charset[3];

int		**process_map(char *buffer);
void	solve_map(int **matriz, int *maxlado, int *max_ij);
void	solved_matriz(int **matriz, int maxlado, int *max_ij);
void	print_map(int **matriz);

int	how_many_numbers(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i] != '\n' && buffer[i] != '\0')
		i++;
	return (i - 3);
}

int	check_number(char *buffer, int *i, int numbers)
{
	g_ly = 0;
	while (*i < numbers)
	{
		if (buffer[*i] < '0' || buffer[*i] > '9')
			return (1);
		g_ly = g_ly * 10 + (buffer[*i] - 48);
		(*i)++;
	}
	if (g_ly == 0)
		return (1);
	return (0);
}

int	get_char_set(char *buffer, int *i)
{
	int	j;
	int	k;

	k = 0;
	while (buffer[*i + k] != '\n' && buffer[*i + k] != '\0')
	{
		g_charset[k] = buffer[*i + k];
		j = *i + k + 1;
		if (k == 3)
			return (1);
		while (buffer[j] != '\n' && buffer[j] != '\0')
		{
			if (buffer[*i + k] == buffer[j])
				return (1);
			j++;
		}
		k++;
	}
	*i += k;
	return (0);
}

int	check_chars(int *i, int *j, char *buffer)
{
	while (buffer[*i + *j] != '\n' && buffer[*i + *j] != '\0')
	{
		if (!(buffer[*i + *j] == g_charset[0] 
				|| buffer[*i + *j] == g_charset[1]
				|| buffer[*i + *j] == g_charset[2]))
			return (1);
		(*j)++;
	}
	return (0);
}

int	check_lines(char *buffer, int *i)
{
	int	j;
	int	n;

	g_lx = -1;
	n = 0;
	(*i)++;
	while (buffer[*i])
	{
		j = 0;
		if (check_chars(i, &j, buffer) == 1)
			return (1);
		(*i) += j + 1;
		if (g_lx != -1 && j != g_lx)
			return (1);
		else
			g_lx = j;
		n++;
	}
	if (n != g_ly)
		return (1);
	return (0);
}
