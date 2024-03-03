#include <stdio.h>
#include <math.h>
        
double obliczSkladnik(double poprzedni, double x, int n) {
 
    return poprzedni * x / n;
}

int main() {
    int ile_skladnikow;
    double argument;

    printf("OBLICZANIE EKSPONENSU:\n");
    printf("Ile skladnikow przyblizenia? ");
    scanf("%d", &ile_skladnikow);

    printf("argument == ");
    scanf("%lf", &argument);

    printf("\n    l.skladn. | wartosc przyblizenia\n");
    printf(" -------------+---------------------\n");

    double suma = 1.0;
    double skladnik = 1.0;
    int i = 1;
        printf("%13d |  %.6lf\n", i, suma);

    for (i; i < ile_skladnikow; i++) {
        skladnik = obliczSkladnik(skladnik, argument, i);
        suma += skladnik;

        printf("%13d |  %.6lf\n", i+1, suma);
    }

    double exp_wynik = exp(argument);
    printf(" -------------+---------------------\n");
    printf(" e^ %.6lf |  %.6lf\n", argument, exp_wynik);

    return 0;
}