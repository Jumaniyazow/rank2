/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjumaniy <sjumaniy@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 20:39:13 by sjumaniy          #+#    #+#             */
/*   Updated: 2026/01/12 20:39:38 by sjumaniy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Subject
Assignment name  : sort_list
Expected files   : sort_list.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following functions:

t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

This function must sort the list given as a parameter, using the function
pointer cmp to select the order to apply, and returns a pointer to the
first element of the sorted list.

Duplications must remain.

Inputs will always be consistent.

You must use the type t_list described in the file list.h
that is provided to you. You must include that file
(#include "list.h"), but you must not turn it in. We will use our own
to compile your assignment.

Functions passed as cmp will always return a value different from
0 if a and b are in the right order, 0 otherwise.

For example, the following function used as cmp will sort the list
in ascending order:

int ascending(int a, int b)
{
	return (a <= b);
}*/

#include "list.h"

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
    t_list *cur;
    int tmp;

    if (!lst)
        return lst;

    cur = lst;
    while (cur->next)
    {
        if (!cmp(cur->data, cur->next->data))
        {
            tmp = cur->data;
            cur->data = cur->next->data;
            cur->next->data = tmp;
            cur = lst;           // restart from beginning
        }
        else
            cur = cur->next;
    }
    return lst;
}
