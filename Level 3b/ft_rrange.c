#include <stdio.h>
#include <stdlib.h>

int	ft_abs(int	n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int     *ft_rrange(int start, int end)
{
	int	len;
	int	i;
	int *range;

	len = ft_abs(end - start) + 1;
	i = 0;
	range = malloc(sizeof(int) * len);
	while (i < len)
	{
		if (start <= end)
		{
			range[i] = end;
			end--;
		}
		else if (start >= end)
		{
			range[i] = start;
			start--;
		}
		i++;
	}
	return (range);
}

int main()
{
	int start;
	int end;
	int *range;
	int len;
	int i;

	// Exemple 1 : start < end
	start = 5;
	end = 10;
	len = abs(end - start) + 1;
	range = ft_rrange(start, end);
	if (!range)
	{
		printf("Erreur d'allocation de mémoire.\n");
		return (1);
	}
	printf("ft_rrange(%d, %d): ", start, end);
	for (i = 0; i < len; i++)
		printf("%d ", range[i]);
	printf("\n");
	free(range);

	// Exemple 2 : start > end
	start = 10;
	end = 5;
	len = abs(end - start) + 1;
	range = ft_rrange(start, end);
	if (!range)
	{
		printf("Erreur d'allocation de mémoire.\n");
		return (1);
	}
	printf("ft_rrange(%d, %d): ", start, end);
	for (i = 0; i < len; i++)
		printf("%d ", range[i]);
	printf("\n");
	free(range);

	// Exemple 3 : start == end
	start = 0;
	end = 0;
	len = abs(end - start) + 1;
	range = ft_rrange(start, end);
	if (!range)
	{
		printf("Erreur d'allocation de mémoire.\n");
		return (1);
	}
	printf("ft_rrange(%d, %d): ", start, end);
	for (i = 0; i < len; i++)
		printf("%d ", range[i]);
	printf("\n");
	free(range);

	return 0;
}
