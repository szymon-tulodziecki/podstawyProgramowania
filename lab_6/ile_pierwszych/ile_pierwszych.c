#include <stdio.h>

int main() {
    int n;
    printf("Ile liczb pierwszych (co najmniej 1)? ");
    scanf("%d", &n);

    int arr[n], i = 1, ile = 0;

    while (ile < n) {
        
            int pierwsza = 1;

            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    pierwsza = 0;
                    break;
                }

            if (pierwsza) {
                arr[ile] = i;
                ile++;
            }
        }

        i++;
    }
    printf("Spis %d liczb pierszych: \n", n);
    
    for (int i = 1; i <=  n; i++) {
        printf("%d. %d\n",i,  arr[i]);
    }

    return 0;
}
