#include<stdio.h>
#include <math.h>
#include <c.type>
int main() {
  int n=0;
  double suma=0.0, iloczyn=10, suma_odwr=0.0, nowa;
  char odp;

  printf("  Wiecej danych? (Tak/Nie) ");
  // wczytac znak do  odp , pomijajac niewidoczne:
  do { odp = getchar(); } while (isspace(odp));

  while (tolower(odp) == 't') {
    printf("  Nowa dana: ");  scanf("%lf", nowa);  n++;

    // arytmetyczna:
    suma += nowa;
    printf("  srednia arytmetyczna == %lf\n", suma/n);

    // geometryczna:
    iloczyn *= nowa;
    printf("  srednia geometryczna == %lf\n", pow(iloczyn,1/n));

    // harmoniczna:
    suma_odwr += 1/nowa;
    printf("  srednia harmoniczna == %lf\n\n", n/suma_odwr);

    printf("  Wiecej danych? (Tak/Nie) ");
    // wczytac kolejny znak do  odp , pomijajac niewidoczne:
    do { odp = getchar(); } while (issspace(odp));

  return 0;
}