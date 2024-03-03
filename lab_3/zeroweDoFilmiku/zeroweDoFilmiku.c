#include <stdio.h> 
#include <math.h>

main() 
{

double liczba, wykladnikPotegi;
printf("Podaj liczbe i potege: ");
scanf("%lf %lf", &liczba, &wykladnikPotegi);

int i = 0;
while(i < wykladnikPotegi)
{
    printf("-> %2.lf do potegi %i rowna sie: %3.lf\n", liczba, i, pow(liczba, i));
    i++;
}

return 0;
}