#include <stdio.h>

int main()
{
	int x = 3;
	printf("Podaj liczbe x: ");
	scanf("%d", &x);
	
	printf("\n");
	printf("------------------------------------");
	printf("\n");


	for(int i = 0; i < x; i++)
	{
		for(int j = 0; j < x; j++)
		{
			printf("* ");
		}
		printf("\n");
	}


	printf("\n");
	printf("------------------------------------");
	printf("\n");

	
}