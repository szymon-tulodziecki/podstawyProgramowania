#include <stdio.h>

int main() {
    double x, y;
    printf("Podaj liczby x i y: ");
    scanf("%lf %lf", &x, &y);

    double n = (x * x) + x / y;
    n /= ((x / (x + y)) + (x * x * x));
    printf("Wartosc wyrazenia dla x = %3lf, y = %3lf jest rowna: %lf\n", x, y, n);

    return 0;
}