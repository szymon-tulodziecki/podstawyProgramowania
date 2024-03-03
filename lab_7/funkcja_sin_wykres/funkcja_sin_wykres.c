#include <stdio.h>
#include <math.h>

#define n 30  

int main() {
    double dane[n], y;
    int i,j;
    printf("\nWYKRES DANYCH (os  x  wskazuje w dol)");
    printf("\n--------------------------------------\n\n");
    for (i = i; i < n; i++) {
        dane[i] = sin(i * 0.5) * 10 + 10;    }
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
