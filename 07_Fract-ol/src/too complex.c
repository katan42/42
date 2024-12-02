/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   too complex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:29:23 by katan             #+#    #+#             */
/*   Updated: 2024/12/02 23:36:44 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

// complex number operations
complex complex_new(double real, double imag) 
{
	complex c;
	c.real = real;
	c.imag = imag;
	return c;
}

complex complex_multiply(complex a, complex b) 
{
	complex result;
	result.real = a.real * b.real - a.imag * b.imag;
	result.imag = a.real * b.imag + a.imag * b.real;
	return result;
}

complex complex_add(complex a, complex b) 
{
	complex result;
	result.real = a.real + b.real;
	result.imag = a.imag + b.imag;
	return result;
}

double complex_mag_squared(complex c) 
{
	return (c.real * c.real + c.imag * c.imag);
}

// Put pixel in image
void my_mlx_pixel_put(char *addr, int x, int y, int color, int line_length, int bpp) 
{
	char *dst;

	dst = addr + (y * line_length + x * (bpp / 8));
	*(unsigned int*)dst = color;
}

// Color function with iteration parameter
int get_color(int iterations, int max_iter) 
{
	if (iterations == max_iter)
		return (0x000000);

	double t = (double)iterations / max_iter;
	int r = (int)(9 * (1 - t) * t * t * t * 255);
	int g = (int)(15 * (1 - t) * (1 - t) * t * t * 255);
	int b = (int)(8.5 * (1 - t) * (1 - t) * (1 - t) * t * 255);

	return (r << 16 | g << 8 | b);
}

// Calculate iterations for a point with variable max_iter
int get_iterations(complex c, int max_iter) 
{
	complex z;
	int iter;

	z = complex_new(0, 0);
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

complex screen_to_complex(int x, int y) 
{
	complex c;
	c.real = (x - WIDTH/2.0) * 4.0/WIDTH;
	c.imag = (y - HEIGHT/2.0) * 4.0/HEIGHT;
	return (c);
}

// loops through every pixel on the screen to put colour
void draw_fractal(char *addr, int max_iter, int line_length, int bpp)
{
	complex	c;
	int		y;
	int 	x;
	int 	iterations;
	int 	colour;

	y = 0;

	while (y < HEIGHT)
	{
		x = 0;
		while (x < WIDTH)
		{
			c = screen_to_complex(x, y);
			iterations = get_iterations(c,max_iter);
			colour = get_colour(iterations, max_iter);
			my_mlx_pixel_put(addr, x, y, colour, line_length, bpp);
			x++;
		}
	y++;
	}
}
