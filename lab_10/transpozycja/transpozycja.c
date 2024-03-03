#include <stdio.h>

int main()
{
	int n, m, k;

	do{
		printf("Podaj ilosc wierszy: ");
		k = scanf("%d", &n);

		if(k != 1)
		{
			printf("\nBlad wczytywania!\n");
			int c;
			while((c = getchar()) != '\n' && c != EOF);
		}
		else if(n < 1)
		{
			printf("\nLiczba musi byc wieksza od 0!\n");
		}
	}while((n < 1) || (k != 1));

	
	do{
		printf("Podaj ilosc kolumn: ");
		k = scanf("%d", &m);

		if(k != 1)
		{
			printf("\nBlad wczytywania!\n");
			int c;
			while((c = getchar()) != '\n' && c != EOF);
		}
		else if(n < 1)
		{
			printf("\nLiczba musi byc wieksza od 0!\n");
		}
	}while((m < 1) || (k != 1));

	double macierz[n][m];

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			do{

				printf("Podaj element [%d][%d]: ", i, j);
				k = scanf("%lf", &macierz[i][j]);
				if(k != 1)
				{
					printf("\nBlad wczytywania!\n");
					int c;
					while((c = getchar()) != '\n' && c != EOF);
				}
			}while(k != 1);
		}
	}

	printf("\nMacierz:\n\n");
	for(int i = 0; i < n; i++)
	{
		printf("|");
		for(int j = 0; j < m; j++)
		{	
			printf("%lf ", macierz[i][j]);
		}
		printf("|\n");
	}

	printf("\n Transpozycja Macierzy:\n\n");

	for(int i = 0; i < m; i++)
	{
		
		printf("|");
		for(int j = 0; j < n; j++)
		{
			printf("%lf ", macierz[j][i]);
		}
		printf("|\n");
	}


	return 0;
}