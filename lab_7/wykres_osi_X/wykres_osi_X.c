#include <stdio.h>


#define n 10  

int main() {
    double dane[n], y;
    int i,j;
    printf("\nWYKRES DANYCH (os  x  wskazuje w dol)");
    printf("\n--------------------------------------\n\n");
    printf("Podaj %d liczb rzeczywistych:\n", n);
    for (i = 0; i < n; i++) {
        printf("%d: ", i+1);
        scanf("%lf", &dane[i]);
    }
    printf("\n");

    for (i = 0; i < n; i++) {
        y = dane[i];
        if (y == 0)  printf("*\n");
        else {
            printf("|");
            for (j=1; j<y; j++)  printf(" ");
            printf("*\n");
        }
    }
    printf("\n");

    return 0;
}
