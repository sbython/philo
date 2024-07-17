/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ckeck_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:56:33 by msbai             #+#    #+#             */
/*   Updated: 2024/07/16 18:48:10 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"



int not_number(char *s)
{
    int i;

    i = 0;
    if (s[i] == '+')
        i++;
    while (s[i])
    {
        if (s[i] < '0' || s[i] > '9')
        {
            write(2,"error in: ", 11);
            write(2,s, ft_strlen(s));
            return (1);
        }
            
        i++;
    }
    return (0);
}

int check_arg(char **av)
{
    int i;

    i = 1;
    while(av[i])
    {
        if(not_number(av[i]) || ft_atoi(av[i]) == 21474836479)
            return (1);
        i++;
    }
    return (0);
}