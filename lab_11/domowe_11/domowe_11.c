#include <stdio.h>


int main()
{
    printf("OBLICZANIE UKLADU ROWNAN Z TRZEMA NIEWIADOMYMI\n");
    printf("----------------------------------------------\n");

    printf("\n Podaj macierz 3 x 3 odpowiadajaca ponizszemu wzorowi\n");

    printf("-\n");
    printf("| ax + ay + az\n");
    printf("| ax + ay + az\n");
    printf("| ax + ay + az\n");
    printf("-\n");

    double macierz[3][3];

    for(int i = 0; i < 3; i++)
    {
       for(int j = 0; j < 3; j++)
       {
           if(j == 0)
           {
               printf("Podaj a[%d][%d]: ", i+1, j+1);
           }
           else if(j == 1)
           {
               printf("Podaj b[%d][%d]: ", i+1, j+1);
           }
           else
           {
               printf("Podaj c[%d][%d]: ", i+1, j+1);
           }
       }
    }

    printf("\n Podaj wektor b: \n");
    

    printf("-\n");
    printf("| ax + ay + az  = b1\n");
    printf("| ax + ay + az  = b2\n");
    printf("| ax + ay + az  = b3\n");
    printf("-\n");


    double wektor[3];

    for(int i = 0; i < 3; i++)
    {
        printf("Podaj b[%d]: ", i);
    }

    
    return 0;
}