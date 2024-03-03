#include <stdio.h>

int main()
{
    int n;
    printf("Podaj grubosc ramienia krzyza: ");
    scanf("%d", &n);

    int x = 3 * n;

   for(int i = 0; i < x; i++)
   {
        for(int j = 0; j < x; j++)
        {
            if(i < n && j < n) printf(" ");
            else if(i < n && j >= 2 * n) printf(" ");
            else if(i >= 2 * n && j < n) printf(" ");
            else if(i >= 2 * n && j >= 2 * n) printf(" ");
            else printf("*");
        }
        printf("\n");
   }

    return 0;
}
	
}