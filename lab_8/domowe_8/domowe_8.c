#include <stdio.h>

int main()
{
	int k, x;
	double y; 

	do{
		printf("Podaj ilosc elementow tablicy: ");
		k = scanf("%d", &x);
		
		if(k != 1){
            printf("\nBlad formatu! Sprobuj raz jeszcze... \n");
            int c;
            while((c = getchar()) != '\n' && c != EOF);
        }else if(x < 1){
            printf("\nBlad! Podaj liczbe wieksza od 0... \n");
        }
	}while((k != 1) || (x < 1));

	printf("\n----------------------------------------------\n");

double tab[x];

for(int i = 0; i < x - 1; i++){
    do{
        printf("Podaj %d element tablicy: ", i);
        k = scanf("%lf", &tab[i]);

        if(k != 1){
            printf("\nBlad formatu! Sprobuj raz jeszcze... \n");
            int c;
            while((c = getchar()) != '\n' && c != EOF);
        } else if(i > 0 && tab[i] <= tab[i - 1]){
            printf("\nBlad! Podaj liczbe wieksza od poprzedniej... \n");
            k = 0;
        }	
    }while((k != 1));
}

	printf("\n----------------------------------------------\n");

	do{
		printf("Podaj dodatkowy element:  ", x - 1);
		k = scanf("%lf", &y);
		
		if(k != 1){
            printf("\n Blad formatu! Sprobuj raz jeszcze... \n");
            int c;
            while((c = getchar()) != '\n' && c != EOF);
        }
    }while(k != 1);
    
	tab[x - 1] = y;

	for(int i = x - 2; i >= 0; i--){
		if(tab[i] > tab[i + 1]){
			double temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
		}
		else
		{
			break;
		}
	}
	
	printf("\n----------------------------------------------\n");

    printf("\nTablica po zamianie: \n");
	for(int i = 0; i < x; i++){
	printf("-> %lf \n", tab[i]);
	}
	return 0;
}