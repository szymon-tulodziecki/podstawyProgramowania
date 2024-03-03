#include <stdio.h>
#include <math.h>

int main()
{
     int k, e;

    do{
    printf("\nPodaj do jaka prezycje obliczyc wartosc miejsca zerowego: ");
    k = scanf("%d", &e);

	if(k == 0) printf("Niepoprawny format! \n");
	if(e <= 0) printf("Bledna wartosc! \n");

    getchar();
	fflush(stdin);
    }while((k == 0) || (e <= 0));   
 double  p = -0.5, q = 0.4;

    for(int i = 0; i < e; i++)
    {   
        double fp = sqrt(1 - 4 * (pow(p, 2.0))) - 0.5;
        double fq = sqrt(1 - 4 * (pow(q, 2.0))) - 0.5;
        if(fp * fq <= 0.0)
        {
            double srodek_przedzialu = (p + q) / 2.0;
            double fs = sqrt(1 - 4 * (pow(srodek_przedzialu, 2.0))) - 0.5;
            if(fs == 0.0)
            {
                p = srodek_przedzialu;
                q = srodek_przedzialu;
            }
            else if(fs * fp < 0.0)
            {
                p = p;
                q = srodek_przedzialu;
            }
            else if(fs * fq < 0.0)
            {
                p = srodek_przedzialu;
                q = q;
            }
            else
            {
                printf("Blad w obliczeniach\n");
                break;
            }
        }
        else
        {
            printf("Osiagnieto maksymalna dokladnosc: %d\n", i);
            break;
        }
    printf("\n e = %d Przyblizona wartosc miejsca zerowego wynosi: %.8lf\n", i, (p + q) / 2.0);

    }
    printf("\nPrzyblizona wartosc miejsca zerowego wynosi: %.6lf\n", (p + q) / 2.0);

    return 0;
}