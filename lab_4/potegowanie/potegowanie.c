#include <stdio.h>

int main()
{
    printf("Podaj liczbe: ");
    double x;
    scanf("%lf", &x);

    printf("\n");

    printf("Podaj wykladnik: ");
    int y;
    scanf("%d", &y);

    printf("\n");

    double wynik = 1;

    while(y > 0)
    {
        if(y % 2 == 0)
        {
            y /= 2;
            x *= x;
        }
        else
        {
            y--;
            wynik = wynik * x;
        }
    }

    printf("Wynik: %f", wynik);
    return 0;
}