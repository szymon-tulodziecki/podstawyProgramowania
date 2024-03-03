#include <stdio.h>
#include <math.h>

int main()
{    
    printf("Obliczanie wartosci x z rownania x^3 - 2x^2 - x + 1 = 0\n");

    int k, e;

    do{
    printf("\nPodaj do jaka prezycje obliczyc wartosc miejsca zerowego: ");
    k = scanf("%d", &e);

	if(k == 0) printf("Niepoprawny format! \n");
	if(e <= 0) printf("Bledna wartosc! \n");

    getchar();
	fflush(stdin);
    }while((k == 0) || (e <= 0));

    double  p = 0.0, q = 2.0;

    for(int i = 1; i <= e; i++)
    {
        double fp = pow(p, 3.0) -2 * pow(p, 2.0) - p +1;
        double fq = pow(q, 3.0) -2 * pow(q, 2.0) - q +1;
        if(fp * fq <= 0.0)
        {
            double srodek_przedzialu = (p + q) / 2.0;
            double fs = pow(srodek_przedzialu, 3.0) -2 * pow(srodek_przedzialu, 2.0) - srodek_przedzialu +1;
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
    printf("\n e = %d Przyblizona wartosc miejsca zerowego wynosi: %.8lf\n", i, (p + q) / 2.0);

        }
        else
        {
            printf("Osiagnieto maksymalna dokladnosc: %d\n", i);
            break;
        }
    }

    return 0;
}