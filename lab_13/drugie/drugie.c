#include <stdio.h>

  int main() {
  
  int* x;  int* y;  int z=0;
    x = y = &z;
    printf("\n  *x == %i   *y == %i\n", *x, *y);
    *x = 1;
    printf("\n  *x == %i   *y == %i\n\n", *x, *y);
    return 0;
  }