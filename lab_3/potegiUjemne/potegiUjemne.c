#include <stdio.h>
#include <math.h>

int main() {
    double liczba, wykladnikPotegi;
    printf("Podaj liczbe i wykladnik potegi: ");
    scanf("%lf %lf", &liczba, &wykladnikPotegi);

    int i = 0;
    double wynik;
    
    if (wykladnikPotegi >= 0) {
        while (i <= wykladnikPotegi) {
            wynik = pow(liczba, i);
            printf("-> %.2lf do potegi %d rowna sie: %.2lf\n", liczba, i, wynik);
            i++;
        }
    } else {
        while (i >= wykladnikPotegi) {
            wynik = pow(liczba, i);
            printf("-> %.2lf do potegi %d rowna sie: %.5lf\n", liczba, i, 1.0 / wynik);
            i--;
        }
    }

    return 0;
}