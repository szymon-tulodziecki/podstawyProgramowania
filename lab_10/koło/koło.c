#include<stdio.h>
#include<math.h>

#define zakres_x 70
#define zakres_y 30

int main() {
	char rysunek[zakres_x][zakres_y];

	// osie wspolrzednych:
	for (int x=0; x<zakres_x; x++)
		for (int y=0; y<zakres_y; y++)
			if (x==0 && y==0)  rysunek[x][y] = '+';
			else  if (x==0)  rysunek[x][y] = '|';
			else  if (y==0)  rysunek[x][y] = '-';
			else  rysunek[x][y] = ' ';

	// rysunek -- ba³wanek:
	double promienie[3] = {10, 20, 30};
	char litery[3] = {'A', 'B', 'C'};

	for (int i = 0; i < 3; i++) {
		double promien = promienie[i];
		char litera = litery[i];

		for (int x = 1; x < zakres_x; x++) {
			for (int y = 1; y < zakres_y; y++) {
				double xx = (double)x / zakres_x;
				double yy = (double)y / zakres_y;
				double odleglosc = sqrt((xx - 0.5) * (xx - 0.5) + (yy - 0.5) * (yy - 0.5));
				if (odleglosc <= promien / zakres_x) {
					rysunek[x][y] = litera;
				}
			}
		}
	}

	// wydruk:
	printf("\n");
	for (int y=zakres_y-1; y>=0; y--) {
		for (int x=0; x<zakres_x; x++)
			printf("%c", rysunek[x][y]);
		printf("\n");
	}
	printf("\n");

	return 0;
}