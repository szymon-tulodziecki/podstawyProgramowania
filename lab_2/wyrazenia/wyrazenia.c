#include <stdio.h>

int main()
{
    int n, k;
    printf("Podaj liczby n i k: ");
    printf("0- falsz, 1- prawda\n");
    scanf("%d %d", &n, &k);

    printf("\n (n > k) %d\n", n > k);
    printf("---------------------------------\n");
    printf("\n (n >= k) %d\n", n >= k);
    printf("---------------------------------\n");
    printf("\n (n != k) %d\n", n != k);
    printf("---------------------------------\n");
     printf("\n (n <= k && k < 2 * n) %d\n", n <= k && k < 2 * n);
    printf("---------------------------------\n");
    printf("\n (n > k || k >= 2 * n) %d\n", n > k || k >= 2 * n);
    printf("---------------------------------\n");
    return 0;
}