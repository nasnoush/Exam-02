#include <unistd.h>


void	rstr_capitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		if ((str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0') && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		write(1, &str[i], 1);
		i++;
	}
}



int main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		while (i < argc)
		{
			rstr_capitalize(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
}