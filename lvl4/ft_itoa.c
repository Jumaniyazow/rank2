/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjumaniy <sjumaniy@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:59:12 by sjumaniy          #+#    #+#             */
/*   Updated: 2026/01/12 17:16:14 by sjumaniy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);

*/

#include <stdlib.h>

char *ft_itoa(int nbr)
{
    long n = nbr;
    int len = 0;
    char *str;

    if (n <= 0)
        len++;          // for '0' or '-'
    while (n)
    {
        n /= 10;
        len++;
    }

    str = malloc(len + 1);
    if (!str)
        return NULL;

    str[len] = '\0';
    n = nbr;

    if (n == 0)
        str[0] = '0';
    if (n < 0)
    {
        str[0] = '-';
        n = -n;
    }

    while (n)
    {
        str[--len] = (n % 10) + '0';
        n /= 10;
    }
    return str;
}
