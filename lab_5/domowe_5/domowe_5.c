#include <stdio.h>

int main()
{
    printf("Podaj ilosc wierszy i kolumn: ");
    int n, m;
    scanf("%d %d", &n, &m);
    printf("\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {printf("+------------------+     ");}
        printf("\n");
        for(int j = 0; j < m; j++)
        {printf("|     Szymon       |     ");}
        printf("\n");
        for(int j = 0; j < m; j++)
        {printf("|   Tulodziecki    |     ");}
        printf("\n");
        for(int j = 0; j < m; j++)
        {printf("+------------------+     ");}
        printf("\n");
    }
    return 0;
}