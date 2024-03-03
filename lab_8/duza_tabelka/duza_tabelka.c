#include <stdio.h>

int main()
{
	int x; 

	scanf("%d", &x);
	
	double tab[x];

		for(int i = 0; i < x; i++){
        	scanf("%lf", &tab[i]);
		}


	   for(int i = x - 1; i >= 0; i--){
        int max = 0;
        for(int j = 0; j <= i; j++){
            if(tab[j] > tab[max]) max = j;
        }
        double temp = tab[i];
        tab[i] = tab[max];
        tab[max] = temp;
    }

	for(int i = 0; i < x; i++){
	printf(" %lf \n", tab[i]);
	}
	return 0;
}