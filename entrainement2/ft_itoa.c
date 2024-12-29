#include <stdlib.h>

int count_size(int nb)
{
	int size;

	size = 0;
	if (nb < 0)
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

char *ft_itoa(int nbr)
{
	int nb;
	int size;
	char *str;

	nb = nbr;
	size = count_size(nb);
	str = malloc(count_size(nb));
	if (str == NULL)
		return (NULL);
	if (nb == 0)
	{
		str[0] = '0';
	}
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb != 0)
	{
		str[--size] = nb % 10 + 48;
		nb = nb / 10;
	}
	return (str);
}

#include <stdio.h>
int main()
{
	int nb = 0;
	printf("%s\n", ft_itoa(nb));
	return (0);
}