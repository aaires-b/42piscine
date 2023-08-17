/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 19:28:44 by aaires-b          #+#    #+#             */
/*   Updated: 2023/08/13 14:40:23 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	*ft_range(int min, int max)

{
	int	i; 
	int	*array;
	int	size_array;

	size_array = (max - min) + 1;
	i = 0;
	array = (int *)malloc(sizeof(int) * size_array);
	while (i < size_array)
	{
		array[i] = min + i;
		i++;
	}
	if (min >= max)
		return ((int *) NULL);
	if (array == NULL)
		return ((int *) NULL);
	return (array);
}

/*int	main(void)
{
	int	min;
	int	max;
	int	*tmp;
	int	i;

	max = 10 + 48;
	min = 7 + 48;
	tmp = ft_range(min, max);
	i = 0;
	while (i < max - min)
	{
		write(1, tmp, 1);
		tmp++;
		i++;
	}
}*/
