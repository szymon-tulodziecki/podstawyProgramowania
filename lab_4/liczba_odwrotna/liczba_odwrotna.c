#include <stdio.h>

int main()
{	
	
	int n, ostatnia;
	printf("Podaj n: ");
	scanf("%d", &n);
	
	printf("\n");

	while(n != 0)
	{
		ostatnia = n % 10;
		printf("%d", ostatnia);
		n = n / 10;
	}
	
	printf("\n");
	return 0;
}