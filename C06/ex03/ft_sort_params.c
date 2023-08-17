/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 20:32:33 by aaires-b          #+#    #+#             */
/*   Updated: 2023/08/08 18:21:47 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i++], 1);
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while ((s1[a] != '\0' || s2[a] != '\0') && s1[a] == s2[a])
	{
		a++;
	}
	return (s1[a] - s2[a]);
}

void	print_params(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		putstr(argv[i++]);
		write(1, "\n", 1);
	}
}

void	ft_sort_params(int argc, char **argv)
{
	int		i;
	char	*tmp;

	i = 1;
	while (i < argc -1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			tmp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = tmp;
			i = 1;
		}
		else
			i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc <= 0)
		return (0);
	ft_sort_params(argc, argv);
	print_params(argc, argv);
	return (argc);
}
