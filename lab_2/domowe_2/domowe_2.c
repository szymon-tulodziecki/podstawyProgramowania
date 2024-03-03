#include <stdio.h>

//http://iis.ans-elblag.pl/~stefan/Dydaktyka/PodstProg/Lab02/

int main()
{   
    printf("Podaj x i y: \n");
    printf("(0, 1, 2, 3)\n");

    int x, y;
    scanf("%d %d", &x, &y);

    if(x || y > 3 || x || y < 0)
    {
        printf("Podano zle liczby\n");
        return 0;
    }
    printf("%d %d", (x * y) / 4, (x * y) % 4);
    return 0;
}