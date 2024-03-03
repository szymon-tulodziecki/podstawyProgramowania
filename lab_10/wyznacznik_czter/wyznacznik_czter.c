#include <stdio.h>
#define N 4

int main(){
	double macierz_4x4[4][4], wyznaczyniki[4];
	int k;


	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			do{
				printf("Podaj [%d][%d] element macierzy 4x4: ", i+1, j+1);
				k = scanf("%lf", &macierz_4x4[i][j]);
				if(k != 1){
					printf("Bledne dane!\n");
					while(getchar() != '\n');
				}

			}while(k != 1);
		}
	}
	 
	printf("\nMacierz 4x4:\n");
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			printf("%lf\t", macierz_4x4[i][j]);
		}
		printf("\n");
	}
	wyznaczyniki[0] =  
	(
		macierz_4x4[0][1] * macierz_4x4[1][2] * macierz_4x4[2][3] +
		macierz_4x4[0][2] * macierz_4x4[1][3] * macierz_4x4[2][1] +
		macierz_4x4[0][3] * macierz_4x4[1][1] * macierz_4x4[2][2] -
		macierz_4x4[0][3] * macierz_4x4[1][2] * macierz_4x4[2][1] -
		macierz_4x4[0][1] * macierz_4x4[1][3] * macierz_4x4[2][2] -
		macierz_4x4[0][2] * macierz_4x4[1][1] * macierz_4x4[2][3]
	);

	wyznaczyniki[1] =  
	(
		macierz_4x4[0][0] * macierz_4x4[1][2] * macierz_4x4[2][3] +
		macierz_4x4[0][2] * macierz_4x4[1][3] * macierz_4x4[2][0] +
		macierz_4x4[0][3] * macierz_4x4[1][0] * macierz_4x4[2][2] -
		macierz_4x4[0][3] * macierz_4x4[1][2] * macierz_4x4[2][0] -
		macierz_4x4[0][0] * macierz_4x4[1][3] * macierz_4x4[2][2] -
		macierz_4x4[0][2] * macierz_4x4[1][0] * macierz_4x4[2][3]
	);	

	wyznaczyniki[2] = 
	(
		macierz_4x4[0][0] * macierz_4x4[1][1] * macierz_4x4[2][3] +
		macierz_4x4[0][1] * macierz_4x4[1][3] * macierz_4x4[2][0] +
		macierz_4x4[0][3] * macierz_4x4[1][0] * macierz_4x4[2][1] -
		macierz_4x4[0][3] * macierz_4x4[1][1] * macierz_4x4[2][0] -
		macierz_4x4[0][0] * macierz_4x4[1][3] * macierz_4x4[2][1] -
		macierz_4x4[0][1] * macierz_4x4[1][0] * macierz_4x4[2][3]
	);

	wyznaczyniki[3] = 
	(
		macierz_4x4[0][0] * macierz_4x4[1][1] * macierz_4x4[2][2] +
		macierz_4x4[0][1] * macierz_4x4[1][2] * macierz_4x4[2][0] +
		macierz_4x4[0][2] * macierz_4x4[1][0] * macierz_4x4[2][1] -
		macierz_4x4[0][2] * macierz_4x4[1][1] * macierz_4x4[2][0] -
		macierz_4x4[0][0] * macierz_4x4[1][2] * macierz_4x4[2][1] -
		macierz_4x4[0][1] * macierz_4x4[1][0] * macierz_4x4[2][2]
	);

	double wyznacznik_4x4 = 
	(
		-(macierz_4x4[3][0] * wyznaczyniki[0]) 
		+(macierz_4x4[3][1] * wyznaczyniki[1])
		-(macierz_4x4[3][2] * wyznaczyniki[2])
		+(macierz_4x4[3][3] * wyznaczyniki[3])

	);

	printf("\nWyznacznik macierzy 4x4 wynosi: %lf\n", wyznacznik_4x4);
	return 0;
}