#include <stdio.h>

int main()
{	
	int n;		
	double max;

	printf("Podaj ilosc liczb: ");
	scanf("%d", &n);
	printf("\n");

	int i = 2;

	printf("Podaj 1. liczbe: ");
    	scanf("%lf", &max);	
	printf("\n");

	while(i < n)

	{
		double x;
		printf("Podaj %d. liczbe: ", i);
		scanf("%lf", &x);
		printf("\n");
		
		if(x > max) max = x;
		i++;
	}
	printf("Najwieksza liczba z podanych jest: %3.lf ! \n", max);

	return 0;
}