#include <stdio.h>
#include <math.h>

int main() {
    double x, n, z = 0, sil;
    int k, i, j, p;

    printf("Obliczanie sumy szeregu sin(x)\n");

    printf("\n Podaj wartosc kata w radianach = ");
    scanf("%lf", &x);
    if (k == 0) {
        printf("\n Blad formatu");
        getchar();
        return 0;
    }

    printf("\n Podaj liczbe wyrazow szeregu = ");
    k = scanf("%lf", &n);
    if (k == 0) {
        printf("\n Blad formatu");
        getchar();
        return 0;
    }

    printf("\n Skladnik  | Wartosc  \n");
    printf(" ------------+---------\n");

    for (i = 0; i < n; i++) {
        sil = 1;
        p = 2 * i + 1;

        for (j = 1; j <= p; j++) {
            sil = sil * j;
        }

        z = z + pow(-1, i) * (pow(x, p) / sil);

        printf("%9d | %.6lf\n", i + 1, z);
    }

    printf("\n Suma szeregu = %lf", z);
    printf("\n sin(x) = %lf", sin(x));
    return 0;
}