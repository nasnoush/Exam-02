void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
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
	unsigned int i = 0;
	int tab[] = {5, 7, 4, 3, 9, 1, 6, 2, 8};
	int size = 9;

	sort_int_tab(tab, size);

	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}