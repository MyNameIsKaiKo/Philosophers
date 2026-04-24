/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philolstfree.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 17:42:33 by jleray            #+#    #+#             */
/*   Updated: 2026/04/24 17:44:03 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void	philolst_free(t_philos **philo)
{
	t_philos	*tmp;

	tmp = *philo;
	if (!tmp)
	{
		philo = NULL;
		return ;
	}
	if (tmp->data)
	{
		free(tmp->data);
		tmp->data = NULL;
	}
	free(tmp);
	philo = NULL;
}
