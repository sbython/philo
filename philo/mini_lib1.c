/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_lib1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:16:27 by msbai             #+#    #+#             */
/*   Updated: 2024/07/16 18:46:24 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"


int ft_strlen(char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

long ft_atoi(char *s)
{
    long    res;
    int     i; 
    
    i = 0;
    if (s[i] == '+')
        i++;
    while (s[i])
    {
        res = (res * 10) + s[i] - '0';
        if(res > 2147483647)
            return  (21474836479);
        i++;
    }
    return (res);
}
