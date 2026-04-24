/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_philo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:20:29 by jleray            #+#    #+#             */
/*   Updated: 2026/04/24 16:44:58 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void	parser_philo(char **av, int ac, t_philo **philo)
{
	int		i;
	int		j;
	t_philo	*tmp;
	size_t	len;

	i = 1;
	j = 0;
	tmp = *philo;
	while (i <= ac)
	{
		len = ft_strlen(av[i]);
		while (j <= (int)len)
		{
			if (!(av[i][j] >= 1 && av[i][j] <= 9))
			{
				printf("Philo : Non valid characters.\n");
				return ;
			}
		}
	}
	tmp->data.philo_count = ft_atoi(av[1]);
	tmp->data.philo_count = ft_atoi(av[2]);
	tmp->data.philo_count = ft_atoi(av[3]);
	if (ac == 5)
		tmp->data.philo_count = ft_atoi(av[4]);
}
