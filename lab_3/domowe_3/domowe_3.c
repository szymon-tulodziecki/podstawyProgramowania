#include <stdio.h>

int main() {
    int n, srod, odp, k;
    int pocz = 0;
    k = 1;

    printf("Podaj liczbe naturalna n:\n");
    scanf("%i", &n);

    while (n < 1) {
        printf("Nie podales liczby naturalnej, podaj ja jeszcze raz:\n");
        scanf("%i", &n);
    }

    printf("\nWybierz liczbe w przedziale (0-(n-1)) i nie podawaj jej\nOdpowiadaj na pytania\ntak=1 nie=0\n");

    int kon = n;

    while (kon - pocz > 1) {
        srod = (pocz + kon) / 2;
        printf("Czy liczba jest mniejsza badz rowna %i?\n", srod);
        scanf("%i", &odp);

        if (odp == 1) {
            kon = srod;
        } else if (odp == 0) {
            pocz = srod;
        } else {
            printf("Odpowiedz tak=1 Odpowiedz nie=0\n");
        }
        odp = 0;
    }

    k = pocz + 1;
    printf("Twoja liczba: %i\n", k);

    return 0;
}