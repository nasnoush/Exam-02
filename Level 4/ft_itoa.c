#include <stdlib.h>
#include <stdio.h>


int count_size(int	nb)
{
	int	size;

	size = 0;
	if (nb <= 0)
	{
		nb = -nb;
		size = 1;
	}
	while (nb != 0)
	{
		nb = nb / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int nbr)
{
	int	size;
	int	nb;
	char *str;

	nb = nbr;
	size = count_size(nb);
	str = malloc(size + 1);
	if (str == NULL)
		return (NULL);
	str[size] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
	{
		str[0] = 0;
	}
	while (nb != 0)
	{
		str[--size] = nb % 10 + 48;
		nb = nb / 10;
	}
	return (str);
}

int main ()
{
	int num = 0;
	printf("%s\n", ft_itoa(num));
	return (0);
}