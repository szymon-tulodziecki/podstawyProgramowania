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

	int w1, w2, k1, k2;

	printf("\nPodaj zakres wierszy macierzy do 'wyciecia': \n");

	do{
		printf("Poczatek (wiersze): ");
		k = scanf("%d", &w1);

		if(k != 1)
		{
			printf("Bledne dane! \n");
			while(getchar() != '\n');
		}else if(w1 < 0)
		{
			printf("Wiersz nie moze byc ujemny! \n");
			while(getchar() != '\n');
		}
		else if(w1 >= n)
		{
			printf("Wiersz nie moze byc wiekszy niz %d! \n", n-1);
			while(getchar() != '\n');
		}
	}while((k != 1) || (w1 < 0) || (w1 >= n));

	do{
		printf("Koniec (wiersze): ");
		k = scanf("%d", &w2);

		if(k != 1)
		{
			printf("Bledne dane! \n");
			while(getchar() != '\n');
		}
		else if(w2 < 0)
		{
			printf("Wiersz nie moze byc ujemny! \n");
			while(getchar() != '\n');
		}
		else if(w2 >= n)
		{
			printf("Wiersz nie moze byc wiekszy niz %d! \n", n-1);
			while(getchar() != '\n');
		}
		else if(w2 < w1)
		{
			printf("Wiersz nie moze byc mniejszy niz %d! \n", w1);
			while(getchar() != '\n');
		}
	}while((k != 1) || (w2 < 0) || (w2 >= n) || (w2 < w1));

	printf("\nPodaj zakres kolumn macierzy do 'wyciecia': \n");

	do{
		printf("Poczatek (kolumny): ");
		k = scanf("%d", &k1);

		if(k != 1)
		{
			printf("Bledne dane! \n");
			while(getchar() != '\n');
		}else if(k1 < 0)
		{
			printf("Kolumna nie moze byc ujemna! \n");
			while(getchar() != '\n');
		}
		else if(k1 >= m)
		{
			printf("Kolumna nie moze byc wieksza niz %d! \n", m-1);
			while(getchar() != '\n');
		}
	}while((k != 1) || (k1 < 0) || (k1 >= m));

	do{
		printf("Koniec (kolumny): ");
		k = scanf("%d", &k2);

		if(k != 1)
		{
			printf("Bledne dane! \n");
			while(getchar() != '\n');
		}
		else if(k2 < 0)
		{
			printf("Kolumna nie moze byc ujemna! \n");
			while(getchar() != '\n');
		}
		else if(k2 >= m)
		{
			printf("Kolumna nie moze byc wieksza niz %d! \n", m-1);
			while(getchar() != '\n');
		}
		else if(k2 < k1)
		{
			printf("Kolumna nie moze byc mniejsza niz %d! \n", k1);
			while(getchar() != '\n');
		}
	}while((k != 1) || (k2 < 0) || (k2 >= m) || (k2 < k1));

	printf("\nMacierz przed 'wycieciem': \n");
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++){
			printf("%2.lf ", macierz[i][j]);
		}
		printf("\n");
	}
	printf("\n Macierz po 'wycieciu': \n");

	for(int i = w1; i <= w2; i++)
	{
		for(int j = k1; j <= k2; j++){
			printf("%2.lf ", macierz[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}