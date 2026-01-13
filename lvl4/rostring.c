/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjumaniy <sjumaniy@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 20:36:55 by sjumaniy          #+#    #+#             */
/*   Updated: 2026/01/12 21:17:20 by sjumaniy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : rostring
Expected files   : rostring.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string and displays this string after rotating it
one word to the left.

Thus, the first word becomes the last, and others stay in the same order.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

Words will be separated by only one space in the output.

If there's less than one argument, the program displays \n.

Example:

$>./rostring "abc   " | cat -e
abc$
$>
$>./rostring "Que la      lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$>
$>./rostring "     AkjhZ zLKIJz , 23y"
zLKIJz , 23y AkjhZ
$>
$>./rostring "first" "2" "11000000"
first
$>
$>./rostring | cat -e
$
$>
*/
#include <unistd.h>

int is_space(char c)
{
    return (c == ' ' || c == '\t');
}

int main(int argc, char **argv)
{
    int i = 0;
    int start;
    int first_start;
    int first_len;

    if (argc < 2)
    {
        write(1, "\n", 1);
        return 0;
    }

    // skip leading spaces
    while (argv[1][i] && is_space(argv[1][i]))
        i++;

    first_start = i;

    // find end of first word
    while (argv[1][i] && !is_space(argv[1][i]))
        i++;

    first_len = i - first_start;

    // skip spaces after first word
    while (argv[1][i] && is_space(argv[1][i]))
        i++;

    start = i;

    // print remaining words
    while (argv[1][i])
    {
        if (!is_space(argv[1][i]))
        {
            start = i;
            while (argv[1][i] && !is_space(argv[1][i]))
                i++;
            write(1, &argv[1][start], i - start);
            write(1, " ", 1);
        }
        else
            i++;
    }

    // print first word
    write(1, &argv[1][first_start], first_len);
    write(1, "\n", 1);

    return 0;
}
