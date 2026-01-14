/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjumaniy <sjumaniy@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 09:26:57 by sjumaniy          #+#    #+#             */
/*   Updated: 2026/01/11 09:44:06 by sjumaniy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Assignment name  : rotone
Expected files   : rotone.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.

'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

The output will be followed by a \n.

If the number of arguments is not 1, the program displays \n.

Example:

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$>

*/

#include <unistd.h>

int main (int ac, char **av)
{
	if(ac == 2)
	{
		int i;
		char c;
		i = -1;
		while(av[1][++i])
		{
			c = av[1][i];
			if((c >='a' && c < 'z') || (c >= 'A' && c < 'Z'))
			{
				c += 1;
			}
			else if(c=='z')
				c='a';
			else if(c =='Z')
				c='A';
			write(1, &c,1);
		}
	}
	write(1, "\n",1);
	return 0;
}