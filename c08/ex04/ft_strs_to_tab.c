/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:34:08 by aaires-b          #+#    #+#             */
/*   Updated: 2023/08/17 09:40:08 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i; 

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	freeloop(int i, struct s_stock_str *structure)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free(structure[j].copy);
		j++;
	}
	free(structure);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*ultimate;
	int					i;

	ultimate = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (ultimate == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		ultimate[i].str = av[i];
		ultimate[i].copy = malloc(ft_strlen(av[i]) + 1);
		if (ultimate[i].copy == NULL)
		{
			freeloop(i, ultimate);
			return (NULL);
		}
		ft_strcpy(ultimate[i].copy, av[i]);
		ultimate[i].size = ft_strlen(av[i]);
		i++;
	}
	ultimate[i].str = NULL;
	ultimate[i].copy = NULL;
	ultimate[i].size = 0;
	return (ultimate);
}
/*int main()
{
    char *strarr[] = {"Hello", "World"};
    struct s_stock_str *stock_array = ft_strs_to_tab(2, strarr);
    if (stock_array == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    for (int i = 0; i < 3; i++)
    {
        printf("String %d:\n", i + 1);
        printf("  Size: %d\n", stock_array[i].size);
        printf("  Str: %s\n", stock_array[i].str);
        printf("  Copy: %s\n", stock_array[i].copy);
    }

    free(stock_array);

    return 0;
} */