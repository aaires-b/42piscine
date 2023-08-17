/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 09:22:49 by aaires-b          #+#    #+#             */
/*   Updated: 2023/08/16 08:57:30 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H 	
# define FT_BOOLEAN_H

# include <unistd.h>

typedef enum s_bool
{
	true = 1,
	false = 0,
}	t_bool;

# define FALSE false
# define TRUE true
# define EVEN(number) (number % 2 == 0)
# define ODD_MSG "I have an odd number of arguments.\n"
# define EVEN_MSG "I have an even number of arguments.\n"
# define SUCCESS 0

#endif
