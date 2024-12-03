/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex math.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:29:23 by katan             #+#    #+#             */
/*   Updated: 2024/12/03 13:01:39 by katan            ###   ########.fr       */
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

// Puts a single colour pixel into image
void my_mlx_pixel_put(char *addr, int x, int y, int color, int line_length, int bpp) 
{
	char *dst;

	dst = addr + (y * line_length + x * (bpp / 8));
	*(unsigned int*)dst = color;
}

// add colour to represent differnt speed at which the "point" escapes
//black is stable(that is number gets smaller), dont escape, haha,black hole
int get_colour(int iterations, int max_iter) 
{
	if (iterations == max_iter)
		return (0x000000);

	double t = (double)iterations / max_iter;
	int r = (int)(9 * (1 - t) * t * t * t * 255);
	int g = (int)(15 * (1 - t) * (1 - t) * t * t * 255);
	int b = (int)(8.5 * (1 - t) * (1 - t) * (1 - t) * t * 255);

	return (r << 16 | g << 8 | b);
}

// Calculate how quickly a "point" escapes
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
//range of 2 to -2 jf any iteration of a point ever gets farther than 2 units away from the origin (0,0), 
//that point will definitely escape to infinity and thus isn't in the Mandelbrot set.
//julia is slightly different but will fit into the range too
//centres x to match the screen coordinates with the complex plane (0,0 in the centre)
complex screen_to_complex(int x, int y, t_data *data) 
{
	complex c;
	c.real = (x - WIDTH/2.0) / (data->zoom * WIDTH/4.0) + data->x_offset;
	c.imag = (y - HEIGHT/2.0) / (data->zoom * HEIGHT/4.0) + data->y_offset;
	return (c);
}

// loops through every pixel on the screen to put colour
void render_fractal(char *addr, int max_iter, int line_length, int bpp)
{
	t_complex	c;
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
			c = screen_to_complex(x, y, data);
			iterations = get_iterations(c,max_iter);
			colour = get_colour(iterations, max_iter);
			my_mlx_pixel_put(data->addr, x, y, colour, line_length, data->bits_per_pixel);
			x++;
		}
	y++;
	}
	mlx_put_image_to_window(data->mlx, data->win, data->img, 0, 0);
}

/* Calculate the next iteration and check if point escapes */
int iterate_point(complex *z, complex c)
{
    double  temp;
    int     i;

    i = 0;
    while (i < MAX_ITERATION)
    {
        /* Calculate z = z² + c */
        temp = z->real * z->real - z->imag * z->imag + c.real;
        z->imag = 2 * z->real * z->imag + c.imag;
        z->real = temp;

        /* Check if point escapes */
        if ((z->real * z->real + z->imag * z->imag) > 4)
            break;
        i++;
    }
    return (i);
}

/* Now our calculation functions become much simpler */
int calculate_mandelbrot(t_data *data, int x, int y)
{
    complex z;
    complex c;

    z.real = 0;
    z.imag = 0;
    c = screen_to_complex(x, y, data);
    return (iterate_point(&z, c));
}

int calculate_julia(t_data *data, int x, int y)
{
    complex z;

    z = screen_to_complex(x, y, data);
    return (iterate_point(&z, data->c));
}

