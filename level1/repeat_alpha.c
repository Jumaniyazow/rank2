/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjumaniy <sjumaniy@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 16:59:04 by sjumaniy          #+#    #+#             */
/*   Updated: 2026/01/13 10:30:20 by sjumaniy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>

*/

#include <unistd.h>

int main(int ac, char **av)
{
	if(ac == 2)
	{
		int i;
		i = -1;
		while (av[1][++i])
		{
			if(av[1][i]>= 'a' && av[1][i]<='z' || av[1][i]>='A' && av[1][i]<='Z')
			{
				int position;
				if(av[1][i]>='A' && av[1][i]<='Z')
				{
					position = av[1][i] + 1 - 'A';
				}
				else position = av[1][i] + 1 -'a';
				for (int j = 0; j<position; j++)
				{
					write (1, &av[1][i],1);
				}
			}
			else 
				write(1, &av[1][i], 1);
		}
	}
	write(1,"\n",1);
	return 0;
	
}