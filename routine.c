/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 10:22:13 by jleray            #+#    #+#             */
/*   Updated: 2026/04/25 10:22:13 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*routine_philoso(void *data)
{
	t_to_send	data_s;

	data_s = *(t_to_send *)data;
	if (data_s.is_alone)
		return (NULL);
	return (NULL);
}
