#include <stdio.h>

int main()
{
	int x = 0, n;
	int tab[n][n], sumy_wierszy[n], sumy_kolumn[n], sumaWiersza = 0, sumaKolumny = 0;

	do{
		printf("Podaj rozmiar kwadratu: ");
		x = scanf("%d", &n);
		if(x != 1)printf("Blad formatu!\n");
		else if(n < 1)printf("Liczba musi byc wieksza od 0!\n");
		if(x == 1){
			int c;
			while((c = getchar()) != '\n' && c != EOF);
		}
	}while((x != 1) || (n < 1));    
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){    
			do{
				printf("Podaj [%d][%d] element tablicy: ", i, j);
				x = scanf("%d", &tab[i][j]);
				if(x != 1){
					printf("Blad formatu!\n");
					int c;
					while((c = getchar()) != '\n' && c != EOF);
				}
			}while(x != 1);
		}
	}
	for(int i = 0; i < n; i++){
		sumy_wierszy[i] = 0;
		sumy_kolumn[i] = 0;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			sumaWiersza += tab[i][j];
		}
		for(int j = 0; j < n; j++){
			sumaKolumny += tab[j][i];
		}
		sumy_kolumn[i] = sumaKolumny;
		sumaKolumny = 0;
		sumy_wierszy[i] = sumaWiersza;
		sumaWiersza = 0;
	}

	int suma_przekatnej_1 = 0, suma_przekatnej_2 = 0;
	for(int i = 0 ; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == j)suma_przekatnej_1 += tab[i][j];
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = n - 1; j >= 0; j--){
			if(i + j == n - 1)suma_przekatnej_2 += tab[i][j];
		}
	}
	printf("\n-----------------------------------------------------\n");
	
	if(suma_przekatnej_1 != suma_przekatnej_2){
		printf("To NIE JEST kwadrat magiczny: \n Suma przekatnej 1: %d\n Suma przekatnej 2: %d\n", suma_przekatnej_1, suma_przekatnej_2);
		return 0;
	}
	else{ 
		for(int i = 1; i < n; i++)
		{
			if(sumy_wierszy[i - 1] != sumy_wierszy[i]){
				printf("To NIE JEST kwadrat magiczny: \n Suma wiersza %d: %d\n Suma wiersza %d: %d\n", i, sumy_wierszy[i], i - 1, sumy_wierszy[i - 1]);
				return 0;
			}
		}
		for(int i = 1; i < n; i++)
		{
			if(sumy_kolumn[i - 1] != sumy_kolumn[i]){
				printf("To NIE JEST kwadrat magiczny: \n Suma kolumny %d: %d\n Suma kolumny %d: %d\n", i, sumy_kolumn[i], i - 1, sumy_kolumn[i - 1]);
				return 0;
			}
		}
	}
	printf("To JEST kwadrat magiczny o sumie %d\n", suma_przekatnej_1);
	return 0;
}
