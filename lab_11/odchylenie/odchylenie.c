#include <stdio.h>
#include <math.h>

void odchylenie(double tab[], int n)
{
    double srednia = 0;
    for(int i=0; i<n; i++)
    {
        srednia += tab[i];
    }
    srednia /= n;

    double odchylenie = 0;
    for(int i=0; i<n; i++)
    {
        odchylenie += pow(tab[i] - srednia, 2);
    }
    odchylenie /= n;
    odchylenie = sqrt(odchylenie);

    printf("Odchylenie standardowe: %lf\n", odchylenie);
}

int main()
{
   printf("Obliczanie odchylenia standardoweo\n");
   printf("-------------------\n");
   int n;

   printf("Podaj ilosc elementow: ");
   scanf("%d", &n);
    double tab[n];
    int k;

    for(int i=0; i<n; i++)
    {
        do{
            printf("Podaj %d element: ", i+1);
          k =  scanf("%lf", &tab[i]);
        }while(k != 1);
    }

    odchylenie(tab, n);

    return 0;
}