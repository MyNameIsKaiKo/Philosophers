/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:17:18 by jleray            #+#    #+#             */
/*   Updated: 2026/04/24 19:21:48 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <pthread.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_data
{
	int					philo_count;
	int					tt_eat;
	int					tt_death;
	int					tt_tts;
	int					max_eat;
}						t_data;

typedef struct s_to_send
{
	pthread_mutex_t		left_fork;
	pthread_mutex_t		right_fork;
	struct s_data		*data;
}						t_to_send;

typedef struct s_philos
{
	pthread_t			philo;
	struct s_to_send	to_send;
	struct s_philos		*next;
}						t_philos;

//	--- parser Function ---
void					parser_philo(char **av, int ac, t_data **data);

//	--- tools Function ---
size_t					ft_strlen(char *s);
int						ft_atoi(const char *nptr);

//	--- Struct Related Function ---
//
t_philos				*philolst_new(t_data *data);
void					philolst_free(t_philos **philo);
//
t_data					*datalst_new(char **av, int ac);

#endif
