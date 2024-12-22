#include <unistd.h>

void	expand(char *str)
{
	int	i;
	int	space;

	i = 0;
	space = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
			space = 1;
		if (str[i] != ' ' && str[i] != '\t')
		{
			if (space)
			{
				write(1, "   ", 3);
			}
			space = 0;
			write(1, &str[i], 1);
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		expand(argv[1]);
	write(1, "\n", 1);
	return (0);
}