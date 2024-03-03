#include <stdio.h>
#include <ctype.h>

int main() {
    int alfabet[26], wystepowanie[26] = {0};

    for (int i = 0; i < 26; i++) {
        alfabet[i] = i;
    }                               // Inicjalizacja alfabetu
    
    char znak;

    printf("\nTESKT NAPISANY MALYMI LITERAMI ZAKONCZONY ENTEREM: \n");
    printf("-------------------------------------------------- \n");
    printf("->      ");

    do {
        scanf("%c", &znak);
        if (isalpha(znak) && islower(znak)) { // Je¿eli znak jest ma³a liter¹ (ignorowanie wielkich liter i znaków bia³ych)
            for (int i = 0; i < 26; i++) {
                if ((int)znak - (int)'a' == alfabet[i]) { 
                    wystepowanie[i]++;
                }
            }
        }
    }while (znak != '\n'); // Pêtla koñczy siê po wpisaniu znaku nowej linii (entera)

    for (int i = 0; i < 26; i++) {
        printf("%c -- %d \n", (char)(alfabet[i] + (int)'a'), wystepowanie[i]);
    }

    return 0;
}