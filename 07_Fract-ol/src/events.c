/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:29:23 by katan             #+#    #+#             */
/*   Updated: 2024/12/03 13:01:39 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

int handle_key(int keycode, t_data *data)
{
	double pan_amount;

	pan_amount = 0.1 / data->zoom;
	if (keycode == KEY_ESC)
		clean_exit(data);
	else if(keycode == KEY_LEFT || keycode == KEY_A)
		data->x_offset -= pan_amount;
	else if(keycode == KEY_RIGHT || keycode == KEY_D)
		data->x_offset += pan_amount;
	else if(keycode == KEY_UP || keycode == KEY_W)
		data->y_offset -= pan_amount;
	else if(keycode == KEY_DOWN || keycode == KEY_S)
		data->y_offset += pan_amount;
	render_fractal(data);
	return (0);
}

int handle_mouse(int button, int x, int y, t_data *data)

{
	t_complex	before;
	t_complex	after;

	if (button == MOUSE_SCROLL_UP || button == MOUSE_SCROLL_DOWN)
	{
		before = screen_to_complex(x, y, data);
		if (button == MOUSE_SCROLL_UP)
			data->zoom = data->zoom * ZOOM_FACTOR;
		else if (button == MOUSE_SCROLL_DOWN)
			data->zoom = data->zoom / ZOOM_FACTOR;
		after = screen_to_complex(x, y, data);

		data->x_offset += before.real - after.real;
        data->y_offset += before.imag - after.imag;
        
        render_fractal(data);
	}
	return (0);
}

int close_window(t_data *data)
{
	mlx_destroy_window(data->mlx, data->win);
	exit(0);
	return (0);
}


