/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 09:43:44 by aaires-b          #+#    #+#             */
/*   Updated: 2023/08/15 10:00:33 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int is_space(char str)
{
    return (str == ' ' || str == '\t');
}

int main(int argc, char **av)
{
    int len;

    if (argc == 2)
    {
        len = ft_strlen(av[1]);
        while (--len >= 0)
            if (!(is_space(av[1][len])) && is_space(av[1][len - 1])
                || len == 0)
            {
                while (!(is_space(av[1][len])) && av[1][len] != '\0')
                    write (1, &av[1][len++], 1);
                break ;
            }
    }
    write (1, "\n", 1);
    return (0);
}