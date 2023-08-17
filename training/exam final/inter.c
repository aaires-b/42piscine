/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 09:32:36 by aaires-b          #+#    #+#             */
/*   Updated: 2023/08/15 09:42:43 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int check_doubles(char *str, int pos, char c)
{
	int i;
	
	i = 0;
	while(i < pos)
	{
		if (str[i] == c)
			return(0);
		i++;
	}
	return(1);
}

int main(int ac, char **av)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	if(ac == 3)
	{
		while(av[1][i])
		{
			if (av[1][i] == av[2][j])
			{
				if(check_doubles(av[1], i, av[1][i]) == 1)
				{
					write(1, &av[1][i], 1);
				}
			i++;
			}
		j++;
		}
	}
	else 
		write(1, "\n", 1);
	return (0);
}