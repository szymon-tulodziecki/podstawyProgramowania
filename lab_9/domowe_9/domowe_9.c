#include <stdio.h>
#include <math.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int dane[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &dane[i][j]);
        }
    }

	
    int rok = 2000, zgony_w_roku = 0, zgony_latami[n];
	printf("\n\n");
    printf("L.p\t| Rok\t| Zgony\n");
    printf("------------------------\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            zgony_w_roku += dane[i][j];
        }
        zgony_latami[i] = zgony_w_roku;
        printf("%d.\t| %d\t| %d \n", i + 1, rok, zgony_w_roku);
        zgony_w_roku = 0;
        rok++;
    }
    printf("\nWYKRES ZGONOW W LATACH 2000-2019 W POLSCE \n");
	printf("Os pionowa - lata, os pozioma - liczba zgonow w zaokragleniu\n");
    printf("------------------------------------------\n\n\n");
    printf("tys (w zaokragleniu): \n");

    for (int i = 350; i <= 420; i += 10) 
    {
        printf("\t%d |", i);
    }
    printf("\n");

    int zakres;

    for (int i = 0; i < n; i++)
    {
        zakres = 350;

        printf("%d |\t", i + 2000);
        for (int j = 0; j < 8; j++)
        {
            if (((zgony_latami[i] / 10000) * 10) == zakres)
            {
                printf("  *     ");
            }
            else
            {
                printf("        ");
            }
            zakres += 10;
        }
        printf("\n");
    }

	int sredniaTyg_tab[m];

	for(int i = 0; i < m; i++){
		int srednia_tygodniowa = 0;
		for(int j = 0; j < n; j++){
			srednia_tygodniowa += dane[j][i];
		}
		sredniaTyg_tab[i] = srednia_tygodniowa / n;
	}


	printf("\nSrednia tygodniowa zgonow w Polsce w latach 2000-2019: \n");
	printf("------------------------------------------------------\n");
	printf("Tydz.\t| Srednia tygodniowa\n");
	printf("-------------------------\n");
	for(int i = 0; i < m; i++){
		printf("%d.\t| %d\n", i + 1, sredniaTyg_tab[i]);
	}
	
	printf("\nWYKRES SREDNIEJ TYGODNIOWEJ ZGONOW W POLSCE W LATACH 2000-2019 \n");
	printf("Os pionowa - tygodnie, os pozioma - srednia tygodniowa zgonow w zaokragleniu\n\n\n");
	

    for (int i = 0; i < m; i++)
    {
        int zakres_2 = 66;
		
		if(i + 1 == 1){
			printf ("Tygodnie Wiosenne-----------------------------------------------------\n");
			printf("tys (w zaokragleniu): \n");

		printf("\t|");
		for (double i = 6.6; i <= 8.0; i += 0.1)
		{
			printf("%.1f|", i);
		}
		printf("\n");
		}
		if(i + 1 == 14){printf("Tygodnie Letnie-------------------------------------------------------\n");
		printf("\t|");
		for (double i = 6.6; i <= 8.0; i += 0.1)
		{
			printf("%.1f|", i);
		}
		printf("\n");
		}
		if(i + 1 == 27){ printf("Tygodnie Jesienne-----------------------------------------------------\n");
		printf("\t|");
		for (double i = 6.6; i <= 8.0; i += 0.1)
		{
			printf("%.1f|", i);
		}
		printf("\n");
		}
		if(i + 1 == 40){printf("Tygodnie Zimowe-------------------------------------------------------\n");
		printf("\t|");
		for (double i = 6.6; i <= 8.0; i += 0.1)
		{
			printf("%.1f|", i);
		}
		printf("\n");
		}
        
		printf("%d\t|", i + 1);
        for (int j = 0; j < 15; j++)
        {
			
			if((sredniaTyg_tab[i] / 100) == zakres_2){
				printf(" *  ");
			}
			else{
				printf("    ");
			}
			zakres_2++;
        }
        printf("\n");
    }
	
    return 0;
}
