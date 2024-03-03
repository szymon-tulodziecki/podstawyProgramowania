#include <stdio.h>

int silnia(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * silnia(n - 1);
    }
}

void newton(int n, int k) {
    int wspolczynnik = silnia(n) / (silnia(k) * silnia(n - k));
    printf("%d*x^%d*y^%d ", wspolczynnik, n - k, k);
}

int main() {
    int n;
    printf("Podaj wartosc n: ");
    scanf("%d", &n);

    printf("(%c+%c)^%d == ", 'x', 'y', n);
    for (int k = 0; k <= n; k++) {
        newton(n, k);
        if (k != n) {
            printf("+ ");
        }
    }
    printf("\n");

    return 0;
}
