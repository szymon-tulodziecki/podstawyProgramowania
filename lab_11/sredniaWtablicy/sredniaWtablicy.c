#include <stdio.h>

void srednia(double tab[], int n)
{
    double suma = 0;
    for(int i=0; i<n; i++)
    {
        suma += tab[i];
    }
    printf("Srednia: %lf\n", suma/n);
}

int main()
{
   printf("Obliczanie sredniej\n");
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

    srednia(tab, n);

    return 0;
}