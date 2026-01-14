/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjumaniy <sjumaniy@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 18:53:24 by sjumaniy          #+#    #+#             */
/*   Updated: 2026/01/11 18:53:26 by sjumaniy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_LIST_SIZE_H
# define FT_LIST_SIZE_H

# include <stdlib.h>

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;

#endif