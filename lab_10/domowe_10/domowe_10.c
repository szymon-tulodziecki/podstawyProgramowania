./	#include <stdio.h>

struct szach
{
    int wartosc;
    int pomocnicza;
};

int main()
{
    struct szach szachownica[8][8];
    int akcja = 5, k;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            szachownica[i][j].wartosc = 0;
            szachownica[i][j].pomocnicza = 0;
        }
    }
    printf("\n");

    do
    {
        printf("\n------------------\n");
        printf("Co zrobic?\n");
        printf("0. Zakonczyc\n");
        printf("1. Dostawic skoczka\n");
        printf("2. Dostawic gonca\n");
        printf("3. Dostawic wieze\n");
        printf("4. Dostawic hetmana\n");
        printf("-> ");
        k = scanf("%d", &akcja);
		if(k!=1){
			printf("\nBledne dane!\n");
			while(getchar()!='\n');
		} 

        int x, y, w;

        switch (akcja)
        {
        case 0:
            break;
        case 1:
            do
            {
                printf("\nPodaj wspolrzedne skoczka: ");
                w = scanf("%d %d", &x, &y);

                if (x > 7 || x < 0 || y > 7 || y < 0)
                {
                    printf("\nNie ma takiego pola\n");
                    while (getchar() != '\n');
                }
                else if (k != 1)
                {
                    printf("\nBledne dane!\n");
                    while (getchar() != '\n');
                }
                else if (szachownica[x][y].wartosc != 0)
                {
                    printf("\nNa tym polu znajduje sie juz figura!\n");
                    while (getchar() != '\n');
                }
                else
                {
                    szachownica[x][y].wartosc = 1;
                    break;
                }

            } while ((x > 7 || x < 0 || y > 7 || y < 0) || (w != 1) || (szachownica[x][y].wartosc != 0));
            break;
        case 2:
            do
            {
                printf("\nPodaj wspolrzedne gonca: ");
                w = scanf("%d %d", &x, &y);

                if (x > 7 || x < 0 || y > 7 || y < 0)
                {
                    printf("\nNie ma takiego pola\n");
                    while (getchar() != '\n');
                }
                else if (k != 1)
                {
                    printf("\nBledne dane!\n");
                    while (getchar() != '\n');
                }
                else if (szachownica[x][y].wartosc != 0)
                {
                    printf("\nNa tym polu znajduje sie juz figura!\n");
                    while (getchar() != '\n');
                }
                else
                {
                    szachownica[x][y].wartosc = 2;
                    break;
                }

            } while ((x > 7 || x < 0 || y > 7 || y < 0) || (w != 1) || (szachownica[x][y].wartosc != 0));
            break;
        case 3:
            do
            {
                printf("\nPodaj wspolrzedne wiezy: ");
                w = scanf("%d %d", &x, &y);

                if (x > 7 || x < 0 || y > 7 || y < 0)
                {
                    printf("\nNie ma takiego pola\n");
                    while (getchar() != '\n');
                }
                else if (k != 1)
                {
                    printf("\nBledne dane!\n");
                    while (getchar() != '\n');
                }
                else if (szachownica[x][y].wartosc != 0)
                {
                    printf("\nNa tym polu znajduje sie juz figura!\n");
                    while (getchar() != '\n');
                }
                else
                {
                    szachownica[x][y].wartosc = 3;
                    break;
                }

            } while ((x > 7 || x < 0 || y > 7 || y < 0) || (w != 1) || (szachownica[x][y].wartosc != 0));
            break;
        case 4:
            do
            {
                printf("\nPodaj wspolrzedne hetmana: ");
                w = scanf("%d %d", &x, &y);

                if (x > 7 || x < 0 || y > 7 || y < 0)
                {
                    printf("\nNie ma takiego pola\n");
                    while (getchar() != '\n');
                }
                else if (k != 1)
                {
                    printf("\nBledne dane!\n");
                    while (getchar() != '\n');
                }
                else if (szachownica[x][y].wartosc != 0)
                {
                    printf("\nNa tym polu znajduje sie juz figura!\n");
                    while (getchar() != '\n');
                }
                else
                {
                    szachownica[x][y].wartosc = 4;
                    break;
                }

            } while ((x > 7 || x < 0 || y > 7 || y < 0) || (w != 1) || (szachownica[x][y].wartosc != 0));
            break;
        default:
            printf("\nNie ma takiej opcji\n");
            break;
        }
    } while ((akcja != 0) || (k != 1));

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (szachownica[i][j].wartosc == 1) // skoczek
            {
                for (int k = -2; k <= 2; k++)
                {
                    for (int l = -2; l <= 2; l++)
                    {
                        if (k * k + l * l == 5 && i + k >= 0 && i + k < 8 && j + l >= 0 && j + l < 8)
                        {
                            szachownica[i + k][j + l].pomocnicza = 1;
                        }
                    }
                }
            }
            else if (szachownica[i][j].wartosc == 2) // goniec
            {
                for (int k = -1; k <= 1; k += 2)
                {
                    for (int l = -1; l <= 1; l += 2)
                    {
                        int x = i + k, y = j + l;
                        while (x >= 0 && x < 8 && y >= 0 && y < 8)
                        {
                            szachownica[x][y].pomocnicza = 1;
                            if (szachownica[x][y].wartosc != 0)
                                break;
                            x += k;
                            y += l;
                        }
                    }
                }
            }
            else if (szachownica[i][j].wartosc == 3) // wieza
            {
                for (int k = -1; k <= 1; k += 2)
                {
                    int x = i + k, y = j;
                    while (x >= 0 && x < 8 && y >= 0 && y < 8)
                    {
                        szachownica[x][y].pomocnicza = 1;
                        if (szachownica[x][y].wartosc != 0)
                            break;
                        x += k;
                    }

                    x = i;
                    y = j + k;
                    while (x >= 0 && x < 8 && y >= 0 && y < 8)
                    {
                        szachownica[x][y].pomocnicza = 1;
                        if (szachownica[x][y].wartosc != 0)
                            break;
                        y += k;
                    }
                }
            }
            else if (szachownica[i][j].wartosc == 4) // hetman
            {
                for (int k = -1; k <= 1; k++)
                {
                    for (int l = -1; l <= 1; l++)
                    {
                        int x = i + k, y = j + l;
                        while (x >= 0 && x < 8 && y >= 0 && y < 8)
                        {
                            szachownica[x][y].pomocnicza = 1;
                            if (szachownica[x][y].wartosc != 0)
                                break;
                            x += k;
                            y += l;
                        }
                    }
                }
            }
        }
    }

    printf("\n     0   1   2   3   4   5   6   7\n  ");
    for (int i = 0; i < 8; i++)
    {
        printf("\n   +---+---+---+---+---+---+---+---+\n");
        printf(" %d |", i);
        for (int j = 0; j < 8; j++)
        {
            if (szachownica[i][j].pomocnicza == 0)
                printf("   |");
            else if ((szachownica[i][j].pomocnicza == 1) && (szachownica[i][j].wartosc == 0))
                printf(" * |");
            else if ((szachownica[i][j].wartosc == 1) && (szachownica[i][j].pomocnicza == 1))
                printf(" S |");
            else if ((szachownica[i][j].wartosc == 2) && (szachownica[i][j].pomocnicza == 1))
                printf(" G |");
            else if ((szachownica[i][j].wartosc == 3) && (szachownica[i][j].pomocnicza == 1))
                printf(" W |");
            else if ((szachownica[i][j].wartosc == 4) && (szachownica[i][j].pomocnicza == 1))
                printf(" H |");
        }
    }
    printf("\n   +---+---+---+---+---+---+---+---+\n");

    return 0;
}
