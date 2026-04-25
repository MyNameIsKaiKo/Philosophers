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

static void	philolst_distrib_fork(t_philos **newphilo)
{
	t_philos	*tmp;
	t_philos	*first;

	tmp = *newphilo;
	first = *newphilo;
	while (tmp->next)
	{
		tmp->to_send.left_hand = &tmp->to_send.fork;
		if (tmp->next)
			tmp->to_send.right_hand = &tmp->next->to_send.fork;
		tmp = tmp->next;
	}
	tmp->to_send.left_hand = &tmp->to_send.fork;
	tmp->to_send.right_hand = &first->to_send.fork;
	return ;
}

static void	philolst_fork_init(t_philos **newphilo)
{
	t_philos	*tmp;

	tmp = *newphilo;
	while (tmp->next)
	{
		pthread_mutex_init(&tmp->to_send.fork, NULL);
		tmp = tmp->next;
	}
	return ;
}

static void	philolst_init(t_philos **newphilo)
{
	int			i;
	t_philos	*tmp;

	i = 0;
	tmp = *newphilo;
	while (i < tmp->to_send.data->philo_count)
	{
		tmp->next = philolst_new(tmp->to_send.data);
		i++;
		tmp = tmp->next;
	}
	return ;
}

t_philos	*philolst_new(t_data *data)
{
	t_philos	*newphilo;

	newphilo = malloc(sizeof(t_philos));
	if (!newphilo)
		return (NULL);
	newphilo->next = NULL;
	newphilo->to_send.data = data;
	philolst_init(&newphilo);
	philolst_fork_init(&newphilo);
	philolst_distrib_fork(&newphilo);
	return (newphilo);
}
