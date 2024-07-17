/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 10:07:18 by msbai             #+#    #+#             */
/*   Updated: 2024/07/16 13:39:53 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int main(int ac, char **av)
{
    if (ac == 6 || ac == 5)
        run_philo(av);
    else
    {
        write(2, "error:\n", 8);
        write(2, "./philo", 8);
        write(2, " number_of_philosophers" , 24);
        write(2," time_to_die time_to_eat time_to_sleep" , 39);
        write(2," [number_of_times_each_philosopher_must_eat]\n", 46);
    }
    return 0;
}