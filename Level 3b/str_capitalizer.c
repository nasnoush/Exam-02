#include <unistd.h>
void	*str_capitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
	}
	write(1, &str[i], 1);
	i++;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		if ((str[i - 1] == ' ' || str[i - 1] == '\t') && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		write(1, &str[i], 1);
		i++;
	}
}

int main (int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		while (i < argc)
		{
			str_capitalize(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
}