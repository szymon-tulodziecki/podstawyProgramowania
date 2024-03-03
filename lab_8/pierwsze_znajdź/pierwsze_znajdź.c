#include <stdio.h>

int main()
{
	int x;
	scanf("%d", &x);

	double tab[x];

	for (int i = 0; i < x; i++)
	{
		scanf("%lf", &tab[i]);
	}

	double temp, max;

	for(int i = 0; i < x; i++)
	{
		for(int j = 0; j < x; j++)
		{
			if(tab[j] > max)
			{
				max = tab[j];
			}
		}
		temp = tab[x - 1];
		tab[x - 1] = max;
		tab[i] = temp;
	}

	for(int i = 0; i < x; i++)
	{
		printf("%lf ", tab[i]);
	}
	return 0;
}