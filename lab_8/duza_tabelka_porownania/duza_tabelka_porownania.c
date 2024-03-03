#include <stdio.h>

//f(n) = n*(n-1)/2

int main()
{
	int x; 

	scanf("%d", &x);
	
	double tab[x];

	for(int i = 0; i < x; i++){
		scanf("%lf", &tab[i]);
	}

	int liczba_porownan = 0;
	int liczba_zamian = 0;

	for(int i = x - 1; i >= 0; i--){
		int max = 0;
		for(int j = 0; j <= i; j++){
			liczba_porownan++;
			if(tab[j] > tab[max]) max = j;
		}
		double temp = tab[i];
		tab[i] = tab[max];
		tab[max] = temp;
		liczba_zamian++;
	}

	for(int i = 0; i < x; i++){
		printf(" %lf \n", tab[i]);
	}

	printf("Liczba porownan: %d\n", liczba_porownan);
	printf("Liczba zamian: %d\n", liczba_zamian);

	return 0;
}