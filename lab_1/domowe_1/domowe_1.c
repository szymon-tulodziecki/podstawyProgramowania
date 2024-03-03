#include <stdio.h>

//http://iis.ans-elblag.pl/~stefan/Dydaktyka/PodstProg/Lab01/

int main()
{	
	int t;
	printf("Podaj ilosc testow: ");
	scanf("%d", &t);

	while(t--)
	{
		double x, y;
		printf("Podaj liczby x i y: ");
		scanf("%lf%lf", &x, &y);
    
		printf("\n Dane: \n \n");

		printf("x = \x1b[31m%lf\x1b[0m\n", x);
		printf("y = \x1b[31m%lf\x1b[0m\n", y);

		printf("\n Wyniki: \n \n");

		printf("x + y = %lf \n", (x + y));
		printf("x - y = %lf \n", (x - y));
		printf("x * y = %lf \n", (x * y));
		double hlp = (2.0 * x) + (y / 2.0);
		printf("2 * y + y / 2 = %lf \n", hlp);
		printf("------------------------------------------------\n");
	}
	return 0;
}