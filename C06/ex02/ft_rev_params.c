/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:51:25 by aaires-b          #+#    #+#             */
/*   Updated: 2023/08/02 11:03:35 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

void	parametros(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	while (i >= 1)
	{
		ft_putstr(argv[i--]);
		write(1, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc <= 0)
		return (0);
	parametros(argc, argv);
	return (0);
}
