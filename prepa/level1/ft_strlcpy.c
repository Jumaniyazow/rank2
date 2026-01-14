/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjumaniy <sjumaniy@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 16:54:36 by sjumaniy          #+#    #+#             */
/*   Updated: 2026/01/09 16:56:21 by sjumaniy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions: 
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2);

*/

char	*ft_strcpy(char *s1, char *s2) {
	int i = -1;
	while (s2[++i])
		s1[i] = s2[i];
	s1[i] = '\0';
	return s1;
}
