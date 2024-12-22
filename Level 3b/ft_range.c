#include <stdlib.h>
#include <stdio.h>

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}


int     *ft_range(int start, int end)
{
	int	len;
	int	i;
	int *range;

	len = ft_abs(end - start) + 1;
	printf("Longueur %d\n", len);
	i = 0;
	range = malloc(sizeof(int) * len);
	if (range == NULL)
		return (NULL);
	while (i < len)
	{
		if (start < end)
		{
			range[i] = start;
			start++;
		}
		else
			range[i] = start--;
		i++;
	}
	return (range);
}




int main()
{
    int *range;
    int i;
    int min = 0;
    int max = 0;

    range = ft_range(min, max);
    if (!range)
    {
        printf("ft_range returned NULL.\n");
        return (1);
    }

    printf("Range from %d to %d:\n", min, max);
    for (i = 0; i < ft_abs(max - min) + 1; i++) // Corrige la taille ici
    {
        printf("%d ", range[i]);
    }
    printf("\n");

    // Libère la mémoire
    free(range);

    return (0);
}