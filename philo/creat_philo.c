/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_philo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:32:18 by msbai             #+#    #+#             */
/*   Updated: 2024/07/27 23:10:41 by msbai            ###   ########.fr       */
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
    t_box   box;
    t_philo *thread;
    int     i;
    
    init_philo(&box, av);
    thread = malloc(box.number_of_philo * sizeof(t_philo));
    i = 0;
    
    while (i < box.number_of_philo)
    {
        // int pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine) (void *), void *arg);
        thread[i].id  = i;
        thread[i].box = &box;
        pthread_create(&thread[i].thread,NULL,thread_philo, &thread[i]);
        printf("create [%d]\n", (int)i);
	i++;
    }
    i = 0;
    while (i < box.number_of_philo)
    {
        // int pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine) (void *), void *arg);
        pthread_join(thread[i].thread, NULL);
        i++;
    }
	while (1)
	{
		if (thread[i].die)
        {
            tell_thread(thread);
            break;
        }
        if (i > box.number_of_philo)
            i = 0;
        else
            i++;
        
	}

}
