#include <unistd.h>

void	rev_wstr(char *str)
{
	int	i;
	int	start;
	int	end;

	i = 0;
	while (str[i])
		i++;
	i--;
	while (i >= 0)
	{
		while (i >= 0 && (str[i] == ' ' || str[i] == '\t'))
			i--;
		end = i;

		while (i >= 0 && (str[i] != ' ' && str[i] != '\t'))
			i--;
		start = i + 1;

		if (start <= end)
		{
			write(1, &str[start], end - start + 1);
			if (i > 0 && i != '\0')
				write(1, " ", 1);
				
		}
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		rev_wstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}