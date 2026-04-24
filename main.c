/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:14:15 by jleray            #+#    #+#             */
/*   Updated: 2026/04/24 16:44:12 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int ac, char **av)
{
	t_philo	*philo;

	if (ac < 4 || ac > 5)
	{
		printf("philo : wrong number of arguments\n");
		return (1);
	}
	else
		parser_philo(av, ac, &philo);
	return (0);
}
