#include <stdio.h>

void wyswietlMiesiac(int dzienStart, int dzienKoniec, const char* nazwaMiesiaca) 
{
    for (int i = dzienStart; i <= dzienKoniec; i += 7) {
        printf("-> %d %s \n", i, nazwaMiesiaca);
        printf("\n");
    }
}

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

    switch(wybor) {
        case 1:
            wyswietlMiesiac(1, 29, "Styczen");
            wyswietlMiesiac(5, 26, "Luty");
            wyswietlMiesiac(4, 25, "Marzec");
            wyswietlMiesiac(1, 29, "Kwiecien");
            wyswietlMiesiac(6, 27, "Maj");
            wyswietlMiesiac(3, 24, "Czerwiec");
            wyswietlMiesiac(1, 29, "Lipiec");
            wyswietlMiesiac(5, 26, "Sierpien");
            wyswietlMiesiac(2, 30, "Wrzesien");
            wyswietlMiesiac(7, 28, "Pazdziernik");
            wyswietlMiesiac(4, 25, "Listopad");
            wyswietlMiesiac(2, 23, "Grudzien");
            break;
        case 2:
            wyswietlMiesiac(2, 30, "Styczen");
            wyswietlMiesiac(6, 27, "Luty");
            wyswietlMiesiac(5, 26, "Marzec");
            wyswietlMiesiac(2, 30, "Kwiecien");
            wyswietlMiesiac(7, 28, "Maj");
            wyswietlMiesiac(4, 25, "Czerwiec");
            wyswietlMiesiac(2, 30, "Lipiec");
            wyswietlMiesiac(6, 27, "Sierpien");
            wyswietlMiesiac(3, 24, "Wrzesien");
            wyswietlMiesiac(1, 29, "Pazdziernik");
            wyswietlMiesiac(5, 26, "Listopad");
            wyswietlMiesiac(3, 31, "Grudzien");
            break;
        case 3:
            wyswietlMiesiac(3, 24, "Styczen");
            wyswietlMiesiac(7, 28, "Luty");
            wyswietlMiesiac(6, 27, "Marzec");
            wyswietlMiesiac(3, 24, "Kwiecien");
            wyswietlMiesiac(1, 29, "Maj");
            wyswietlMiesiac(5, 26, "Czerwiec");
            wyswietlMiesiac(3, 24, "Lipiec");
            wyswietlMiesiac(7, 28, "Sierpien");
            wyswietlMiesiac(4, 25, "Wrzesien");
            wyswietlMiesiac(2, 30, "Pazdziernik");
            wyswietlMiesiac(6, 27, "Listopad");
            wyswietlMiesiac(4, 25, "Grudzien");
            break;
        case 4:
            wyswietlMiesiac(4, 25, "Styczen");
            wyswietlMiesiac(1, 29, "Luty");
            wyswietlMiesiac(7, 28, "Marzec");
            wyswietlMiesiac(4, 25, "Kwiecien");
            wyswietlMiesiac(2, 30, "Maj");
            wyswietlMiesiac(6, 27, "Czerwiec");
            wyswietlMiesiac(4, 25, "Lipiec");
            wyswietlMiesiac(1, 29, "Sierpien");
            wyswietlMiesiac(5, 26, "Wrzesien");
            wyswietlMiesiac(3, 24, "Pazdziernik");
            wyswietlMiesiac(7, 28, "Listopad");
            wyswietlMiesiac(5, 26, "Grudzien");
            break;
        case 5:
            wyswietlMiesiac(5, 26, "Styczen");
            wyswietlMiesiac(2, 30, "Luty");
            wyswietlMiesiac(1, 29, "Marzec");
            wyswietlMiesiac(5, 26, "Kwiecien");
            wyswietlMiesiac(3, 24, "Maj");
            wyswietlMiesiac(7, 28, "Czerwiec");
            wyswietlMiesiac(5, 26, "Lipiec");
            wyswietlMiesiac(2, 30, "Sierpien");
            wyswietlMiesiac(6, 27, "Wrzesien");
            wyswietlMiesiac(4, 25, "Pazdziernik");
            wyswietlMiesiac(1, 29, "Listopad");
            wyswietlMiesiac(6, 27, "Grudzien");
            break;
        case 6:
            wyswietlMiesiac(6, 27, "Styczen");
            wyswietlMiesiac(3, 24, "Luty");
            wyswietlMiesiac(2, 30, "Marzec");
            wyswietlMiesiac(6, 27, "Kwiecien");
            wyswietlMiesiac(4, 25, "Maj");
            wyswietlMiesiac(1, 29, "Czerwiec");
            wyswietlMiesiac(6, 27, "Lipiec");
            wyswietlMiesiac(3, 24, "Sierpien");
            wyswietlMiesiac(7, 28, "Wrzesien");
            wyswietlMiesiac(5, 26, "Pazdziernik");
            wyswietlMiesiac(2, 30, "Listopad");
            wyswietlMiesiac(7, 28, "Grudzien");
            break;
        case 7:
            wyswietlMiesiac(7, 28, "Styczen");
            wyswietlMiesiac(4, 25, "Luty");
            wyswietlMiesiac(3, 24, "Marzec");
            wyswietlMiesiac(7, 28, "Kwiecien");
            wyswietlMiesiac(5, 26, "Maj");
            wyswietlMiesiac(2, 30, "Czerwiec");
            wyswietlMiesiac(7, 28, "Lipiec");
            wyswietlMiesiac(4, 25, "Sierpien");
            wyswietlMiesiac(1, 29, "Wrzesien");
            wyswietlMiesiac(6, 27, "Pazdziernik");
            wyswietlMiesiac(3, 24, "Listopad");
            wyswietlMiesiac(1, 29, "Grudzien");
            break;
        default:
            printf("Niepoprawny wybor!\n");
            break;
    }

    return 0;
}	
