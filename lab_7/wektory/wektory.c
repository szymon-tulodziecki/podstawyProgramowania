#include <stdio.h>

int main()
{
    int n;
    printf("Podaj liczbe dlugosc 2 wektorow: ");
    scanf("%d", &n);
    
    double wektor_1[n], wektor_2[n], suma[n];

    printf("------------------------\n");
    printf("Podaj liczby 1 wektora: \n");
    
    for(int i = 0; i < n; i++)
    {
        printf("Podaj %i liczbe: ", i+1);
        scanf("%lf", &wektor_1[i]);
    }

    printf("------------------------\n");
    printf("Podaj liczby 2 wektora: \n");
    
    for(int i = 0; i < n; i++)
    {
        printf("Podaj %d liczbe: ", i+1);
        scanf("%lf", &wektor_2[i]);
    }

    for(int i = 0; i < n; i++)
    {
        suma[i] = wektor_1[i] + wektor_2[i];
    }
    printf("------------------------\n");
    printf("Suma wektorow: \n");

    for(int i = 0; i < n; i++)
    {
        printf("%lf\n", suma[i]);
    }
    return 0;
}