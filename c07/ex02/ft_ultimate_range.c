/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 11:17:05 by aaires-b          #+#    #+#             */
/*   Updated: 2023/08/13 14:38:47 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i; 
	int	size_of_array;
	int	*aux;

	size_of_array = (max - min);
	aux = (int *)malloc(size_of_array * sizeof(int));
	i = 0;
	while (i < size_of_array)
	{
		aux[i] = min + i;
		i++;
	}
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (aux == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = aux;
	return (i);
}

/*int	main(void)
{
	int	min;
	int	max;
	int	*ptr;

	min = 5;
	max = 20;
	printf("%d", ft_ultimate_range(&ptr, min, max));
}*/
