#include <stdio.h>

int main()
{
	int k;
	
	printf("Podaj liczbe: ");
	scanf("%d", &k);

	printf("Rownanie jest rowne: %d \n", (k + 1) * (k + 2) - k);
	
	return 0;
}