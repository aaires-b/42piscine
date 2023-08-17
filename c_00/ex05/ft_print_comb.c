/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:26:48 by aaires-b          #+#    #+#             */
/*   Updated: 2023/07/27 08:01:07 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_number(int i, int j, int k)
{
	i += 48;
	j += 48;
	k += 48;
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
	write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 6) 
	{
		j = i + 1;
		while (j <= 8) 
		{
			k = j + 1;
			while (k <= 9) 
			{
				write_number (i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
	write (1, "789", 3);
}
