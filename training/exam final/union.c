/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 10:31:29 by aaires-b          #+#    #+#             */
/*   Updated: 2023/08/15 10:49:57 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_print(char *str, char *array)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(array[str[i]] == 0)
		{
			write(1, &str[i], 1);
			array[str[i]] = 1;
		}
	i++;
	}
}

int main(int ac, char **av)
{
	int i;
	char array[128];

	i = 0;
	while( i < 128)
	{
		array[i] = 0;
	i++; 
	}
	if(ac == 3)
	{
		ft_print(av[1], array);
		ft_print(av[2], array);
	}
	else
		write(1, "\n", 1);
	return (0);
}