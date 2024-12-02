/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialise and exit.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:29:23 by katan             #+#    #+#             */
/*   Updated: 2024/12/03 01:51:23 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

void    init_default_values(t_data *data)
{
    /* Clear all memory first to avoid undefined behavior */
    ft_memset(data, 0, sizeof(t_data));
    
    /* Set initial viewing parameters */
    data->zoom = 1.0;
    data->x_offset = 0;
    data->y_offset = 0;
    
    /* Default color settings */
    data->color_shift = 0;
    
    /* Reset complex numbers */
    data->z.real = 0;
    data->z.imag = 0;
}
int    init_mlx(t_data *data)
{
    /* Initialize the MLX library connection */
    data->mlx = mlx_init();
    if (!data->mlx)
        return (ft_printf("MLX initialisation failed\n"), 0);
    
    /* Create a window of specified size */
    data->win = mlx_new_window(data->mlx, WIDTH, HEIGHT, "Fract'ol");
    if (!data->win)
    {
        mlx_destroy_display(data->mlx);
        free(data->mlx);
        return (ft_printf("Window creation failed\n", 0));
    }
    
    /* Create an image for double buffering */
    data->img = mlx_new_image(data->mlx, WIDTH, HEIGHT);
    if (!data->img)
    {
        mlx_destroy_window(data->mlx, data->win);
        mlx_destroy_display(data->mlx);
        free(data->mlx);
        return (ft_printf("Image creation failed\n", 0));
    }
    
    /* Get the image's memory address and information */
    data->addr = mlx_get_data_addr(data->img, &data->bits_per_pixel,
                                  &data->line_length, &data->endian);
    return (1);
}

void clean_exit(t_data *data)
{
	if (data->img)
	{
		mlx_destroy_image(data->mlx, data->img);
		data->img = NULL;
	}
	if (data->win)
	{
		mlx_destroy_window(data->mlx, data->win);
		data->win = NULL;
	}
	if (data->mlx)
	{
		mlx_destroy_display(data->mlx);
		free(data->mlx);
		data->mlx = NULL;
	}
	exit(0);
}