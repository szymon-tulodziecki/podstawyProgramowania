#include <stdio.h>

int main() {
    double x, y;
    int t;

    printf("Podaj ilosc testow: ");
    scanf("%d", &t);
    while(t--)
    {
        printf("Podaj liczby x i y: ");
        scanf("%lf %lf", &x, &y);

        if (((x >= 0 && x <= 40) && (y >= 0 && y <= 40)) || ((x <= 0 && x >= -40) && (y <= 0 && y >= -40))) 
        {
            printf("-> Rozowy\n");
        }
        else if (((x >= 0 && x <= 40) && (y <= 0 && y >= -40)) || ((x <= 0 && x >= -40) && (y >= 0 && y <= 40))) 
        {
            printf("-> Zielony\n");
        }
        else if((x > 40 && y < -40) || (x < -40 && y > 40))
        {
            printf("-> Szary\n");
        }
        else if((x > 40 && y > 40) || (x < -40 && y < -40))
        {
            printf("-> Zolty\n");
        }
    }
    return 0;
}