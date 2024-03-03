#include <stdio.h>

int main()
{
	int k, l, x; 

	do{
		printf("Podaj ilosc elementow tablicy: ");
		k = scanf("%d", &x);
		
		if(k != 1) printf("Blad formatu! Sprobuj raz jeszcze... \n");
		getchar();
		fflush(stdin);
	}while(k != 1);

	double tab[x];

	do{
		for(int i = 0; i < x; i++){
			printf("Podaj %d element tablicy: ", i);
            l = scanf("%lf", &tab[i]);
            if(l != 1) printf("Blad formatu! Sprobuj raz jeszcze... \n");
            getchar();
            fflush(stdin);
		}
	}while(l != 1);

	int temp = tab[x - 1];
	tab[x - 1] = tab[0];
	tab[0] = temp;
    
    printf("\nTablica po zamianie: \n");
	for(int i = 0; i < x; i++){
	printf("-> %lf \n", tab[i]);
	}
	return 0;
}