#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("\n");
		return (1);
	}
	int	number1;
	int	number2;

	number1 = atoi(argv[1]);
	number2 = atoi(argv[2]);

	while (number1 != number2)
	{
		if (number1 > number2)
			number1 = number1 - number2;
		else
			number2 = number2 - number1;
	}
	printf("%d\n", number1);
	return (0);
}