#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int x = 5;
	int y = 10;
	
	printf("Não trocou: x = %d, y = %d\n", x, y);
	swap(&x, &y);
	printf("Trocou: x = %d, y = %d\n", x, y);
	
	return (0);
}
