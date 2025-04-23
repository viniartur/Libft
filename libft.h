/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 13:55:25 by vvieira           #+#    #+#             */
/*   Updated: 2025/04/23 15:17:22 by vvieira          ###   ########.fr       */
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
       strlen - calculate the length of a string
SYNOPSIS
       size_t strlen(const char *s);

DESCRIPTION
       The strlen() function calculates the length 
	   of the string pointed to by s, excluding the terminating 
	   null byte ('\0').

RETURN VALUE
       The strlen() function returns the number of bytes in 
	   the string pointed to by s.
*/

int	ft_isalpha(char c);
// isalpha()
// checks for an alphabetic character; in the standard "C" locale, it is equivalent to (isupper(c) || islower(c)).  In some locales, there may be additional characters for  which  isalpha()
// is true—letters which are neither uppercase nor lowercase.

int ft_isascii(int c);
// isascii() checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.

int	ft_isdigit(char c);
// ft_isdigit | Verifica se o caractere é um dígito (0–9)

int	ft_isprint(char c);
// ft_isprint  | Verifica se o caractere é imprimível (incluindo espaço).

int ft_tolower(int c);
// ft_tolower  Converte letra maiúscula para minúscula

int ft_toupper(int c);
// ft_toupper Converte letra minúscula para maiúscula

int ft_atoi(const char *nptr);
//Converts the initial portion of the string pointed to by str to int.

#endif