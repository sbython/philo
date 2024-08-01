/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_philo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 11:41:51 by msbai             #+#    #+#             */
/*   Updated: 2024/07/31 18:45:41 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void * thread_philo(void * arg)
{
    t_philo *thread;
    int     i;

    i = 0;
    thread = (t_philo *)arg;
    while (i != thread->box->number_looping)
    {
        if (!thread->stop)
            take_fork();
        if (!thread->stop)
            write_eat();
        if (!thread->stop)
            write_sleep();
       i++;
    }
    
    return NULL;
}
