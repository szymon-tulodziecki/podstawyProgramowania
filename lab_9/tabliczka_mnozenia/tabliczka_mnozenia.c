#include <stdio.h>


int main()
{
	int x, n;

	do {
		printf("Podaj podstawe ukladu liczenia (2-10): ");
		x = scanf("%d", &n);
		if (x != 1) {
			printf("Blad! Podaj liczbe!\n");
			fflush(stdin);
			getchar();
		}
		else if (n < 2 || n > 10)
			printf("Blad! Podaj liczbe z zakresu 2-10!\n");
	} while ((x != 1) || (n < 2) || n > 10);

	int arr_l[n], arr_r[n], tabelka[n - 1][n - 1];

	for(int i = 1; i < n; i++){
		arr_l[i] = i;
		arr_r[i] = i;
	}
	for(int i = 1; i < n; i++){
		printf("%d ", arr_l[i]);
	}
	return 0;
}