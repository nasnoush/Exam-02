#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb >= 10)
		ft_putnbr(nb / 10);
	char c = (nb % 10) + 48;
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	r;
	int	s;

	i = 0;
	s = 1;
	r = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			s = s * -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - 48);
		i++;
	}
	return (r * s);
}

int main(int argc, char **argv)
{
	int	i;
	int nb;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	i = 1;
	nb = ft_atoi(argv[1]);
	while (i <= 9)
	{
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(nb);
		write(1, " = ", 3);
		ft_putnbr(i * nb);
		write(1, "\n", 1);
		i++;
	}
}
