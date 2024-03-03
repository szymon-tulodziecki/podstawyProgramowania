#include <stdio.h>

int main()
{

	int n, m, k;

	do{
		printf("Podaj ilosc wierszy: ");
		k = scanf("%d", &n);

		if(k != 1)
		{
			printf("Bledne dane! \n");
			while(getchar() != '\n');
		}else if(n < 1)
		{
			printf("Ilosc wierszy nie moze byc ujemna! \n");
			while(getchar() != '\n');
		}
	}while((k != 1) || (n < 1));

	do{
		printf("Podaj ilosc kolumn: ");
		k = scanf("%d", &m);

		if(k != 1)
		{
			printf("Bledne dane! \n");
			while(getchar() != '\n');
		}else if(m < 1)
		{
			printf("Ilosc kolumn nie moze byc ujemna! \n");
			while(getchar() != '\n');
		}
	}while((k != 1) || (m < 1));

	double macierz[n][m];
	printf("\n");
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++){
			do{
				printf("Podaj element [%d][%d] macierzy: ", i, j);
				k = scanf("%lf", &macierz[i][j]);

				if(k != 1)
				{
					printf("Bledne dane! \n");
					while(getchar() != '\n');
				}
			}while(k != 1);
		}
	}

	double wektor[m];
	printf("\n");
	for(int i = 0; i < m; i++)
	{
		do{
			printf("Podaj element [%d] wektora: ", i);
			k = scanf("%lf", &wektor[i]);

			if(k != 1)
			{
				printf("Bledne dane! \n");
				while(getchar() != '\n');
			}
		}while(k != 1);
	}

	double wynik[n];

	for(int i = 0; i < n; i++)
	{
		wynik[i] = 0;
		for(int j = 0; j < m; j++)
		{
			wynik[i] += macierz[i][j] * wektor[j];
		}
	}
	printf("\nMacierz: \n");
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++){
			printf("%lf ", macierz[i][j]);
		}
		printf("\n");
	}
	printf("\nWektor: \n");
	for(int i = 0; i < m; i++)
	{
		printf("%lf \n", wektor[i]);
	}
	printf("\nWynik mnozenia macierzy przez wektor: \n");
	for(int i = 0; i < n; i++)
	{
		printf("%lf \n", wynik[i]);
	}
	return 0;
}