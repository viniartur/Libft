/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 13:55:25 by vvieira           #+#    #+#             */
/*   Updated: 2025/04/18 13:56:14 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

size_t	ft_strlen(const char *str);
/*
NAME
       strlen - calculate the length of a string

SYNOPSIS
       #include <string.h>

       size_t strlen(const char *s);

DESCRIPTION
       The strlen() function calculates the length 
	   of the string pointed to by s, excluding the terminating 
	   null byte ('\0').

RETURN VALUE
       The strlen() function returns the number of bytes in 
	   the string pointed to by s.

ATTRIBUTES
       For an explanation of the terms used in this section, 
	   see attributes(7).
*/

#endif