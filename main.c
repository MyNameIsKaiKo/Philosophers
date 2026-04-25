/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:14:15 by jleray            #+#    #+#             */
/*   Updated: 2026/04/24 19:19:08 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int ac, char **av)
{
	t_data		*data;
	t_philos	*philos;

	if (ac < 5 || ac > 6)
	{
		printf("Philo : wrong number of arguments\n");
		return (1);
	}
	parser_philo(av, ac, &data);
	if (!data)
		return (1);
	philos = philolst_new(data);
	if (!philos)
	{
		free(data);
		return (1);
	}
	return (0);
}
