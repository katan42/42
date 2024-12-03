/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   too_complex_fractals.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:29:23 by katan             #+#    #+#             */
/*   Updated: 2024/12/03 20:18:43 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

// Calculate how quickly a "point" escapes
//its quite cool we use > 4.0 because its just less painful to due with (sq rt (real2 + imag2) > 2)
int get_iterations(t_complex c, int max_iter)
{
	t_complex z;
	int iter;

	z = complex_new(0.0, 0.0);
	iter = 0;
	while (iter < max_iter)
	{
		if (complex_mag_squared(z) > 4.0)
			return iter;
		z = complex_add(complex_multiply(z, z), c);
		iter++;
	}
	return (max_iter);
}

int calculate_mandelbrot(t_data *data, int x, int y)
{
	t_complex z;
	t_complex c;

	z.real = 0;
	z.imag = 0;
	c = screen_to_complex(x, y, data);
	return (get_iterations(c, MAX_ITER));
}

int calculate_julia(t_data *data, int x, int y)
{
	t_complex z;

	z = screen_to_complex(x, y, data);
	printf("Julia calculation - z: (%f, %f), c: (%f, %f)\n",
           z.real, z.imag, data->c.real, data->c.imag);
	return (get_iterations(z, data->c));
}


// loops through every pixel on the screen to put colour
void render_fractal(t_data *data)
{
	int			y;
	int 		x;
	int 		iterations;
	int 		colour;

	y = 0;

	while (y < HEIGHT)
	{
		x = 0;
		while (x < WIDTH)
		{
			if (data->fractol_type == MANDELBROT)
				iterations = calculate_mandelbrot(data, x, y);
			else if (data->fractol_type == JULIA)
				iterations = calculate_julia(data, x, y);
			colour = get_colour(iterations, MAX_ITER);
			my_mlx_pixel_put(data->addr, x, y, colour, data->line_length, data->bits_per_pixel);
			x++;
		}
	y++;
	}
	mlx_put_image_to_window(data->mlx, data->win, data->img, 0, 0);
}
