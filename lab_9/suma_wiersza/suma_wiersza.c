#include <stdio.h>

int main()
{
	int x, n, k;

	do{
		printf("Podaj ilosc wierszy: ");
		x = scanf("%d", &n);
		if(x != 1)printf("Blad formatu!\n");
		if(n < 1)printf("Liczba musi byc wieksza od 0!\n");
		getchar();
		fflush(stdin);
	}while((x != 1) || (n < 1));

	do{
		printf("Podaj ilosc kolumn: ");
		x = scanf("%d", &k);
		if(x != 1)printf("Blad formatu!\n");
		if(n < 1)printf("Liczba musi byc wieksza od 0!\n");
		getchar();
		fflush(stdin);
	}while((x != 1) || (k < 1));

	double tab[n][k];
	double b_tab[k];
	do{
		for(int i = 0; i < n; i++){
			for(int j = 0; j < k; j++){
				printf("Podaj [%d][%d] element tablicy: ", i, j);
				x = scanf("%lf", &tab[i][j]);
				if(x != 1){
					printf("Blad formatu!\n");
					j -= 1;
					i -= 1;
				}
				getchar();
				fflush(stdin);
			}
		}
	}while(x != 1);
	
	printf("\n");

	double sumaWiersza = 0;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < k; j++){
			sumaWiersza += tab[i][j];
		}
		b_tab[i] = sumaWiersza;
		sumaWiersza = 0;
	}

	printf("\nWypisuje tablice sumy wierszy: \n");
	for(int i = 0; i < n; i++){
		printf("%lf\n", b_tab[i]);
	}

	return 0;
}