/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjumaniy <sjumaniy@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 20:14:35 by sjumaniy          #+#    #+#             */
/*   Updated: 2026/01/12 20:34:18 by sjumaniy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int word_len(char *str)
{
    int i = 0;
    while (str[i] && str[i] != ' ')
        i++;
    return i;
}

char **ft_split(char *str)
{
    char **split;
    int i = 0, j = 0, k, len;

    split = malloc(sizeof(char *) * 1000);
    if (!split)
        return NULL;

    while (str[i])
    {
        while (str[i] == ' ')
            i++;
        if (!str[i])
            break;

        len = word_len(&str[i]);
        split[j] = malloc(len + 1);
        if (!split[j])
            return NULL;

        k = 0;
        while (k < len)
            split[j][k++] = str[i++];
        split[j][k] = '\0';
        j++;
    }
    split[j] = NULL;
    return split;
}



int main(void)
{
    char **result;
    int i = 0;

    result = ft_split("hello world 42 school");

    while (result[i])
    {
        printf("result[%d] = \"%s\"\n", i, result[i]);
        free(result[i]);   // free each word
        i++;
    }
    free(result);          // free array

    return 0;
}