#include <stdio.h>
int main()
{
	double a;
	int b;
	printf("Podaj podstawe i wykladnik potegi: ");
	scanf("%lf %d", &a, &b);
	
	double anw = 1;
	int hlp = 1;

	if(b < 0)
	{			
		while(hlp <= -b)
		{
			anw *= a;
			hlp++;
		}
		anw = 1 / anw;
		printf("Potega jest rowna: %lf \n", anw);		
	}
	else if(b > 0)
	{	
		
		int hlp = 1;

		while(hlp <= b)
		{	
			anw = anw * a;
			hlp++;
		}
		printf("Potega jest rowna: %lf \n", anw);		
	}
	else
	{
		printf("Potega = 1 \n");
	}
		return 0;
	
}