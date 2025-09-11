/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fract.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:39:25 by oamairi           #+#    #+#             */
/*   Updated: 2025/09/11 18:41:44 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fract.h"

int	main(int argc, char **argv)
{
	void	*mlx_connection;
	void	*mlx_window;

	mlx_connection = mlx_init();
	mlx_window = mlx_new_window(mlx_connection, 500, 500, "fract-ol");
	mlx_loop(mlx_connection);
}