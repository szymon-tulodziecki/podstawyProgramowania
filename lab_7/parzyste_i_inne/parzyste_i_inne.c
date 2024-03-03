#include <stdio.h>

int main()
{

    int n; 
	int arr[n];

    printf("Podaj ilosc liczb: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("Podaj liczbe: ");
        scanf("%d", &arr[i]);
    }
	printf("--------------------\n");
    printf("Liczby parzyste: \n");
    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
            printf("%d\n", arr[i]);
    }
    printf("--------------------\n");
    printf("Liczby ujemne: \n");
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < 0)
            printf("%d\n", arr[i]);
    }
    printf("--------------------\n");
    printf("Liczby ktorych ostatnia cyfra to 0: \n");
    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 10 == 0)
            printf("%d\n", arr[i]);
    }
	
	return 0;
}