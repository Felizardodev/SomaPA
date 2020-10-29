#include <stdio.h>

int main ()
{
	int num, soma;
	soma =0;
	
	for (num = 2; num <= 100; num += 2)
	{
		soma += num;
	}
	printf ("O valor total da PA e %d", soma);
	
	return 0;
}
