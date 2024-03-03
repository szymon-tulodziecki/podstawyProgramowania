#include <stdio.h>

int main()
{
	int x;
	printf("Podaj dlugosc jednej przyprostokatnych: ");


	scanf("%d", &x);
	
	printf("\n");
	printf("------------------------------------");
	printf("\n");


	for(int i = 0; i < x; i++)
	{	
		for(int j = 0; j <= i ; j++)
		{
			printf("* ");

		}
		
		printf("\n");
	}


	printf("\n");
	printf("------------------------------------");
	printf("\n");

	
}