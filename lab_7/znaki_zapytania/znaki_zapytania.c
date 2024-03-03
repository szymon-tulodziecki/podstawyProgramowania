#include <stdio.h>


int main()
{
    int n;
    printf("Podaj liczbe n: ");
    scanf("%d", &n);
    
    double arr[n];
    
    for(int i = 0; i < n; i++)
    {
        printf(" Podaj %i liczbe: ", i + 1);
        scanf("%f", &arr[i]);
    }
     	printf("\n");
    for(n = n - 1; n >= 0; n--)
    {
        printf("%d. %f\n", n +1, arr[n]);
    }
    return 0;
}