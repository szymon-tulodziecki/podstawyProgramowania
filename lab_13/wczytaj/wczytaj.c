#include <stdio.h>
#include <stdlib.h> 

void wczytajLiczbyRzeczywiste(double* liczby, int* ilosc) {
    *ilosc = 0;
    char odpowiedz;
    
    do {
        printf("Podaj liczbe rzeczywista: ");
        scanf("%lf", &liczby[*ilosc]);
        (*ilosc)++;
        
        printf("Czy chcesz podac kolejna liczbe? (t/n): ");
        scanf(" %c", &odpowiedz);
    } while (odpowiedz == 't' || odpowiedz == 'T');
}

int main() {
    double liczby[10000];
    int ilosc;
    
    wczytajLiczbyRzeczywiste(liczby, &ilosc);
    
    printf("Ilosc podanych liczb: %d\n", ilosc);
    printf("Podane liczby: ");
    for (int i = 0; i < ilosc; i++) {
        printf("%.2lf ", liczby[i]);
    }
    printf("\n");
    
    return 0;
}
