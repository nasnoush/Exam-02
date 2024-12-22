void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int tmp;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
}
#include <stdio.h>

int main()
{
    int tab[] = {7, 2, 8, 4, 1, 3};
    unsigned int size = 6;
    unsigned int i = 0;

    sort_int_tab(tab, size);

    while (i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
    printf("\n");

    return 0;
}
