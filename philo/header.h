/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:32:30 by msbai             #+#    #+#             */
/*   Updated: 2024/07/16 18:52:33 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <unistd.h> 
#include <pthread.h>
#include <string.h>

//------struct---------//
typedef struct s_box
{
    pthread_t  thread;
    int         id;
    size_t      number_of_philo;
    size_t      time_to_die;
    size_t      time_to_eat;
    size_t      time_to_sleep;
    int         number_looping;
}t_box;
//--------function------//
void creat_philo(char **av);
int ft_strlen(char *s);
int not_number(char *s);
int check_arg(char **av);
void run_philo(char **av);
long ft_atoi(char *s);

#endif