/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjumaniy <sjumaniy@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:57:03 by sjumaniy          #+#    #+#             */
/*   Updated: 2026/01/08 21:15:27 by sjumaniy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main()
{
	
	int i = 1;
	int t = 0;
	int n = 0;
	int p = 0;
	while(i<101)
	{
		if(i%15 == 0)
		{
			write(1,"fizzbuzz\n", 9);
			i++;
		}
		else if(i%5 == 0)
		{
		write(1,"buzz\n", 5);
		i++;
		}
		else if(i%3 == 0)
		{
			write(1,"fizz\n", 5);
			i++;
		}else if(i > 10)
		{
			t = i/10 +'0';
			n = i%10 +'0';
			write(1, &t, 1);
			write(1, &n, 1);
			write(1, "\n", 1);
			i++;
		}
		else 
		{
			p = i + '0';
			write(1, &p, 1);
			write(1, "\n", 1);
			i++;
		}
	}
	return 0;
}
