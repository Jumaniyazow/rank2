/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjumaniy <sjumaniy@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 16:48:05 by sjumaniy          #+#    #+#             */
/*   Updated: 2026/01/13 13:39:39 by sjumaniy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.

*/

int max(int *tab, unsigned int len) {
    unsigned int i = -1;
    int max = tab[0];
    while (++i <= len) {
        if (tab[i] > max)
            max = tab[i];
    }
    return max;
}
/*int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int				max_val;

	if (len == 0)
		return (0);
	max_val = tab[0];
	i = 1;
	while (i < len)
	{
		if (tab[i] > max_val)
			max_val = tab[i];
		i++;
	}
	return (max_val);
}
*/