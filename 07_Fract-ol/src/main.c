/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:29:23 by katan             #+#    #+#             */
/*   Updated: 2024/12/03 01:50:15 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

void	print_instructions(void)
{
	ft_printf("Usage should be:\n");
	ft_printf("either: ./fractol mandelbrot \n or: ./fractol julia <real> <imaginary> \n\n");
	ft_printf("For eg.\n ./fractol mandelbrot \n ./fractol julia -0.4 0.6\n");
}

static int is_valid_double(char *str)
{
    int i;
    int has_digit;
    
    i = 0;
    has_digit = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i])
    {
        if (str[i] == '.' && str[i + 1] != '\0')
            i++;
        if (!ft_isdigit(str[i]))
            return (0);
        has_digit = 1;
        i++;
    }
    return (has_digit);
}

//checks if is mandelbrot or julia, whether parameters keyed in is correct
int    parse_args(t_data *data, int argc, char **argv)
{
    if (!ft_strncmp(argv[1], "mandelbrot", 10) && argc == 2)
    {
        data->type = MANDELBROT;
        return (1);
    }
    if (!ft_strncmp(argv[1], "julia", 5) && argc == 4)
    {
        if (!is_valid_double(argv[2]) || !is_valid_double(argv[3]))
            return (ft_printf("Error: Julia's parameters must be valid numbers\n"), 0);
        data->type = JULIA;
        data->c.real = ft_atof(argv[2]);
        data->c.imag = ft_atof(argv[3]);
		if (fabs(data->c.real) > 2 || fabs(data->c.imag) > 2)
            return (ft_printf("Error: Julia's parameters must be between -2 and 2\n"), 0);

        return (1);
    }
    return (0);
}
//sets up hooks, that is start "looking out" for the various input
void    setup_hooks(t_data *data)
{
    mlx_hook(data->win, KeyPress, KeyPressMask, handle_keypress, data);
    mlx_hook(data->win, ButtonPress, ButtonPressMask, handle_mouse, data);
    mlx_hook(data->win, DestroyNotify, 0, close_window, data);
}

int main(int argc, char **argv)
{
	t_data data;

	if (argc < 2 || argc > 4)
		return (print_instructions(void), 1);
	init_default_values(&data); // pass a pointer to the data struct
	if (!parse_args(&data, argc, argv))
		return (print_instructions(void), 1);
	if (!init_mlx(&data))
	{
		ft_printf("Error\n");
		return (clean_exit(&data), 1);
	}
	setup_hooks(&data);
	render_fractal(&data);
	mlx_loop(data.mlx);
	return 0;
}
