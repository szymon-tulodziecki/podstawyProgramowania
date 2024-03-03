#include <stdio.h>

int silnia(int x){
    int i, s=1;
    for (i=2; i<=x; i++)
        s *= i;
    return s;
}

int main()
{
     int n;
    printf("\n   TABLICA SILNI:\n\n");
    printf("    n |     n!\n");
    printf("  ----+-----------\n");
    for (n=0; n<13; n++)
        printf("   %2i | %9i\n", n, silnia(n));
    printf("\n");
    return 0;
}