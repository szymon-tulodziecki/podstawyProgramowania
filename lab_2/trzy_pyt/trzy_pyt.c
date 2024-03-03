#include <stdio.h>

int main()
{	
	int odp;
		
	printf("\nCzy liczba jest mniejsza od 4? (tak = 1/ nie = 0)");
	scanf("%d", &odp);
	
	
	if(odp == 1)
	{
		int odp2;

		printf("\nCzy liczba jest mniejsza od 2?\n");
		scanf("%d",&odp2);
		
		if(odp2== 1)
		{	
			int odp3;
			printf("\nCzy liczba jest mniejsza od 1?\n");
			scanf("%d", &odp3);
			
			if(odp3 == 1)
			{
				printf("\n Twoja liczba to 0\n");
			}
			else if(odp3== 0)
			{
				printf("\n Twoja liczba to 1\n");
			}			
		}
		else if(odp2== 0)
		{	
			int odp3;
			printf("\nCzy liczba jest mniejsza od 3?\n");
			scanf("%d", &odp3);
			
			if(odp3== 1)
			{
				printf("\n Twoja liczba to 2\n");
			}
			else if(odp3== 0)
			{
				printf("\n Twoja liczba to 3\n");
			}
		}
		
	}
	else if(odp == 0)
	{
		int odp2;
		printf("Czy liczba jest mniejsza od 6?\n");
		scanf("%d", &odp2);
		

		

		if(odp2== 1)
		{	
			int odp3;
			printf("\nCzy liczba jest mniejsza od 5?\n");
			scanf("%d",&odp3);
			
			if(odp3== 1)
			{
				printf("\nTwoja liczba to 4\n");
			}
			else if(odp3== 0)
			{
				printf("\nTwoja liczba to 5\n");

			}
		}
		else if(odp2== 1)
		{
			int odp3;
			printf("\nCzy liczba jest mniejsza od 7?\n");
			scanf("%d", &odp3);
			
			if(odp3== 1)
			{
				printf("\nTwoja liczba to 6\n");
			}
			else if(odp3== 0)
			{
				printf("\nTwoja liczba to 7\n");

			}
		}
	}

	return 0;
}