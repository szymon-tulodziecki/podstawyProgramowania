#include <stdio.h>

int main() {
    int wybor;

    printf("WYBIERZ DZIEN TYGODNIA\n");
    printf("----------------------\n");
    printf("1. Poniedzialek \n");
    printf("2. Wtorek	\n");
    printf("3. Sroda 	\n");
    printf("4. Czwartek 	\n");
    printf("5. Piatek	\n");
    printf("6. Sobota 	\n");
    printf("7. Niedziela 	\n");
    printf("----------------------\n");
    printf("-> ");

    scanf("%d", &wybor);

    if (wybor < 1 || wybor > 7) {
        printf("Niepoprawny wybor!\n");
        return 1;
    }

    for (int i = wybor - 1; i < 12; i++) {
        switch (i % 7) {
            case 0: printf("Poniedzialek"); break;
            case 1: printf("Wtorek"); break;
            case 2: printf("Sroda"); break;
            case 3: printf("Czwartek"); break;
            case 4: printf("Piatek"); break;
            case 5: printf("Sobota"); break;
            case 6: printf("Niedziela"); break;
            default: break;
        }
        printf(":\n");
        switch (i) {
            case 0: printf("Styczen"); break;
            case 1: printf("Luty"); break;
            case 2: printf("Marzec"); break;
            case 3: printf("Kwiecien"); break;
            case 4: printf("Maj"); break;
            case 5: printf("Czerwiec"); break;
            case 6: printf("Lipiec"); break;
            case 7: printf("Sierpien"); break;
            case 8: printf("Wrzesien"); break;
            case 9: printf("Pazdziernik"); break;
            case 10: printf("Listopad"); break;
            case 11: printf("Grudzien"); break;
            default: break;
        }
        printf(":\n");
        for (int j = 1; j <= 29 + (i % 2); j += 7) {
            printf("-> %d\n", j);
        }
        printf("\n");
    }

    return 0;
}