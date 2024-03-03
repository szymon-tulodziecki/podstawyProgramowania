#include <stdio.h>

void bin(int n) {
  int tab[32], i, j;
  for (i=0; i<32; i++) {
    tab[i] = n%2;  n /= 2;
  }
  for (i=3; i>=0; i--) {
    printf(" ");
    for (j=7; j>=0; j--)
      printf("%i", tab[8*i+j]);
  }
}
int main()
{
    int min, max;
    
    do{
        printf("Podaj minimum i maksimum: ");
        scanf("%i %i", &min, &max);
    }while(min >= max);

     int n;
    printf("\n   BINARNY OBRAZ N:\n\n");
    printf("    n |     n!\n");
    printf("  ----+---------------------------------------\n");
    for (n = min; n <= max; n++) {
        printf(" %4i | ", n);
        bin(n);
        printf(" | ");
        printf("\n");
    }
    printf("\n");
    return 0;
}