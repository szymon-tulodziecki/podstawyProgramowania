#include <stdio.h>

int main() {
    int n, p, q;
    printf("Podaj liczbe naturalna: ");
    scanf("%d", &n);

    p = n;
    q = 0;

    while (p % 2 == 0) {
        p /= 2;
        q++;
    }

    printf("%d = %d * 2^%d\n", n, p, q);

    return 0;
}
