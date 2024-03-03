#include <stdio.h>

int main()
{	
	int n, k;

	printf("Sprawdzanie najwiekszego wspolnego dzielnika\n");
	printf("--------------------------------------------\n");
	printf("-> Podaj liczbe x: ");
	scanf("%d", &n);
	printf("--------------------------------------------\n");
	printf("-> Podaj liczbe y: ");
	scanf("%d", &k);
	printf("--------------------------------------------\n");
	

	if(n == k) printf("Najwiekszym wspolnym dzielnikiem liczb jest &d!", &n);
	else if(n == 0 || k == 0) printf("Nie dzielimy przez 0!\n");
	else
	{
		while(n != k)
		{	
			if(n > k)
			{
				n -= k;
			}
			else
			{
				k -= n;
			}
		}
		printf("Najwiekszym wspolnym dzielnikiem liczb jest %d!\n", n);
	}

	return 0;
}