#include <stdio.h>

int main()
{
    printf("Podaj liczbe calkowita: ");
    int a;
    scanf("%d", &a);

    if(a < 0) printf("Liczba nie jest naturalna!\n");
    else if(a == 1 || a == 0) printf("Liczba nie jest ani pierwsza, anie zlozona!\n");
    else if(a == 2 || a == 3) printf("Liczba jest pierwsza!\n");
    else
    {
        for(int i = 2; i * i <= a; i++)
        {
            if(a % i == 0)
            {
                printf("Liczba jest zlozona!\n");
                return 0;
            }
        }
        printf("Liczba jest pierwsza!\n");
    }
   
    return 0;
}