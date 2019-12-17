#include "libftprintf.h"

int		ft_natoi(char *str, int i)
{
	int nbr;

	nbr = 0;
	while (ft_isdigit(str[i]))
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	return (nbr);
}

t_info	ft_init_info(void)
{
	t_info info;

	info.precision = -1;
	info.largeur = -1;
	info.moins = 0;
	info.zeros = 0;
	return (info);
}

void	ft_take_arg(va_list *arg, char *type, int i)
{
	if (type[i] == '*')
	{
		if (type[i - 1] != '.')
			info.largeur = va_arg(*arg, int);
		else if (type[i - 1] == '.')
			info.precision = va_arg(*arg, int);
		else
			va_arg(*arg, int);
		i++;
	}
}

t_info	ft_arg_i_d(va_list *arg, char *type)
{
	int		nbr;
	int		i;
	t_info	info;

	i = 0;
	info = ft_init_info();
	while (ft_check_flag(type[i]))
		if (type[i++] == '-')
			info.moins = 1;
		else
			info.zeros = 1;
	while (type[i])
	{
//		printf("\np =\t\t%d\nl =\t\t%d\n", info.precision, info.largeur);
		//if (ft_isdigit(type[i]))
		//	ft_natoi(type, i);
		if (type[i] == '*')
		{
//			printf("type[i] : %c", type[i]);
			if (type[i - 1] != '.')
				info.largeur = va_arg(*arg, int);
			else if (type[i - 1] == '.')
				info.precision = va_arg(*arg, int);
			else
				va_arg(*arg, int);
			i++;
		}
		i++;
	}
//	printf("\np =\t\t%d\nl =\t\t%d\n", info.precision, info.largeur);
	nbr = va_arg(*arg, int);
	ft_disp_arg(info.precision, info.largeur, ft_itoa(nbr), 1);
	return (info);
}
