#include <stdio.h>

int main() {
    int n;

    printf("Podaj liczbe: ");
    scanf("%d", &n);

    if(n < 0) 
    {
        printf("Niepoprawne dane wejscia!\n");
        return 0;
    }
    else 
    {
        if(n == 0) printf("Silnia z 0 wynosi 1\n");
        else
        {        
            int i = 1;
            long long int silnia = 1;
            while(i <= n)
            {
                silnia *= i;
                i++;
            }
            printf("Silnia z %d wynosi %lli\n", n, silnia);
        }
    }

    return 0;
}