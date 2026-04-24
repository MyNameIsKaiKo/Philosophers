/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:17:18 by jleray            #+#    #+#             */
/*   Updated: 2026/04/24 16:37:08 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <unistd.h>

typedef struct s_data
{
	int				philo_count;
	int				tt_death;
	int				tt_eat;
	int				tt_tts;
	int				max_eat;
}					t_data;

typedef struct s_philo
{
	struct s_data	data;
}					t_philo;

//	--- parser Function ---
void				parser_philo(char **av, int ac, t_philo **philo);

//	--- tools Function ---
size_t				ft_strlen(char *s);
int					ft_atoi(const char *nptr);

//	--- Struct Related Function ---
#endif
