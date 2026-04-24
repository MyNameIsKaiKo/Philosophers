/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   datalestnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 19:06:29 by jleray            #+#    #+#             */
/*   Updated: 2026/04/24 19:21:44 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

t_data	*datalst_new(char **av, int ac)
{
	t_data	*newdata;

	newdata = malloc(sizeof(t_data));
	if (!newdata)
		return (NULL);
	newdata->philo_count = ft_atoi(av[1]);
	newdata->tt_death = ft_atoi(av[2]);
	newdata->tt_eat = ft_atoi(av[3]);
	newdata->tt_tts = ft_atoi(av[4]);
	if (ac == 6)
		newdata->max_eat = ft_atoi(av[5]);
	return (newdata);
}
