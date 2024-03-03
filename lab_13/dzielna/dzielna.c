#include <stdio.h>

void divmod(int a, int b, int* q, int* r) {
    *q = a/b;  *r = a%b;
}

int main() {
    int dzielna, dzielnik, iloraz, reszta;
    printf("\n  dzielna  == "); scanf("%i", &dzielna);
    printf("  dzielnik == "); scanf("%i", &dzielnik);

    divmod(dzielna, dzielnik, &iloraz, &reszta);

    printf("\n  WYNIK:  %i/%i ==  %i r %i\n\n",
                 dzielna, dzielnik, iloraz, reszta
    );
}
