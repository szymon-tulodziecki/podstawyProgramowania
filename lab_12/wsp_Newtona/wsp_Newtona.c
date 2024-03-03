#include <stdio.h>

int newton(int n, int k) {
    int pascal[n - k + 1][k + 1];

    for (int i = 0; i <= n - k; i++) {
        for (int j = 0; j <= k; j++) {
            if (j == 0 || j == i) {
                pascal[i][j] = 1;
            } else {
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
            }
        }
    }

    return pascal[n - k][k];
}

int main() {
    int n, k;
    printf("Podaj wartosci n i k: ");
    scanf("%d %d", &n, &k);
    int wspolczynnik = newton(n, k);
    printf("Wspolczynnik dwumianowy C(%d, %d) = %d\n", n, k, wspolczynnik);
    return 0;
}
