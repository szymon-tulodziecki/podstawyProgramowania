#include<stdio.h>

  int main() {
    int i;
    char  a[3], b[3], c[3];
    for (i=0; i<3; i++) {
      a[i] = 'A';  b[i] = 'B';  c[i] = 'C';
    }

    printf("\n  ");
    for (i= 0; i<3; i++)  printf("%c", a[i]);
    printf("\n  ");
    for (i=0; i<3; i++)  printf("%c", b[i]);
    printf("\n  ");
    for (i= 0; i<3; i++)  printf("%c", c[i]);
    printf("\n\n");
  }