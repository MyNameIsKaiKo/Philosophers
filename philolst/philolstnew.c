/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philolstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 17:04:51 by jleray            #+#    #+#             */
/*   Updated: 2026/04/24 19:05:57 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void	init_philosophers(t_philos **philos)
{
	t_philos	*tmp;
	int			i;

	tmp = *philos;
	i = 0;
	while (i < tmp->data->philo_count)
	{
		tmp->next = philolst_new(tmp->data);
	}
}

t_philos	*philolst_new(t_data *data)
{
	t_philos	*newphilo;

	newphilo = malloc(sizeof(t_philos));
	if (!newphilo)
		return (NULL);
	newphilo->data = data;
	return (newphilo);
}
