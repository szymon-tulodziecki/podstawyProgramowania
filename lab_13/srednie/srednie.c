#include <stdio.h>
#include <math.h>
void srednie(int n, double a[], double *sr_a, double *sr_g) {
  int i;
  double iloczyn = 1;
  for (i=0; i<n; i++) {
    *sr_a += a[i];
    iloczyn *= a[i];
  }
  *sr_a /= n;
  *sr_g = pow(iloczyn, 1.0/n);
}
int main() {
    int  n, i;
    printf("\nOBLICZANIE SREDNICH ARYTMETYCZNEJ I GEOMETRYCZNEJ");
    printf("\nIle elementow?  ");  scanf("%i", &n);
    double a[n], sr_a, sr_g;
    printf("Elementy tablicy:\n");
    for (i=0; i<n; i++)  scanf("%lf", &a[i]);

    srednie(n, a, &sr_a, &sr_g);

    printf("\n  srednia arytmetyczna == %lf", sr_a);
    printf("\n  srednia geometryczna == %lf\n\n", sr_g);
    return 0;
  }