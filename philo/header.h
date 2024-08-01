/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:32:30 by msbai             #+#    #+#             */
/*   Updated: 2024/07/31 18:39:06 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <unistd.h> 
#include <pthread.h>
#include <string.h>
#include <stdlib.h>

//------struct---------//
typedef pthread_mutex_t mutex;



typedef struct s_box
{
	long      number_of_philo;
	long      time_to_die;
	long      time_to_eat;
	long      time_to_sleep;
	long      number_looping;
	int			someone_die;
	
}t_box;

typedef struct s_philo
{
	pthread_t  thread;
	int         id;
	t_box       *box;
	int			stop;
	int			die;
	long		last_eat;
	long		last_spleep;
	
}t_philo;



//--------function------//
void creat_philo(char **av);
int ft_strlen(char *s);
int not_number(char *s);
int check_arg(char **av);
void run_philo(char **av);
long ft_atoi(char *s);
void * thread_philo(void * arg);

#endif
