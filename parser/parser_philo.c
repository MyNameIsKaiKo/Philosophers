/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_philo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:20:29 by jleray            #+#    #+#             */
/*   Updated: 2026/04/24 17:09:23 by jleray           ###   ########.fr       */
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
	while (i < ac)
	{
		len = ft_strlen(av[i]);
		while (j < (int)len)
		{
			if ((av[i][j] >= 1 && av[i][j] <= 9))
			{
				printf("Philo : Non valid characters.\n");
				return ;
			}
			j++;
		}
		i++;
	}
	tmp = philolst_new(av, ac);
}
