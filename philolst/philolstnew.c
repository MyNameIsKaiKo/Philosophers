/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philolstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 17:04:51 by jleray            #+#    #+#             */
/*   Updated: 2026/04/24 17:09:48 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

t_philo	*philolst_new(char **av, int ac)
{
	t_philo	*newphilo;

	newphilo = malloc(sizeof(t_philo));
	newphilo->data.philo_count = ft_atoi(av[1]);
	newphilo->data.philo_count = ft_atoi(av[2]);
	newphilo->data.philo_count = ft_atoi(av[3]);
	if (ac == 5)
		newphilo->data.philo_count = ft_atoi(av[4]);
	return (newphilo);
}
