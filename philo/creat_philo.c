/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_philo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:32:18 by msbai             #+#    #+#             */
/*   Updated: 2024/07/16 18:53:20 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void init_philo(t_box *thread, char **av)
{
    thread->number_of_philo = ft_atoi(av[1]);
    thread->time_to_die = ft_atoi(av[2]);
    thread->time_to_eat = ft_atoi(av[3]);
    thread->time_to_sleep = ft_atoi(av[4]);
    if (av[5])
        thread->number_looping = ft_atoi(av[5]);
    else 
        thread->number_looping = -1;
}
void creat_philo(char **av)
{
    t_box thrad;
    memset(thrad, 0, sizeof(thrad));
    inti_philo(thrad);
    
}