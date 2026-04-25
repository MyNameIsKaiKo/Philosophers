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

t_philos	*philolst_new(t_data *data)
{
	t_philos	*newphilo;

	newphilo = malloc(sizeof(t_philos));
	if (!newphilo)
		return (NULL);
	newphilo->to_send.data = data;
	return (newphilo);
}
