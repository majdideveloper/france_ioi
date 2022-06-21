#include <stdio.h>
/**
 * main - main function
 * Return: Nothing
 */
int main(void)
{
	int nbLivres, nbJours, nbClients;


	scanf("%d %d", &nbLivres, &nbJours);
	int arrayBook[nbLivres];

	for (int k = 0; k < nbLivres; k++)
	{
		arrayBook[k] = 0;
	}
	for (int i = 0 ; i < nbJours; i++)
	{
		int indiceLivre, dureLivre;

		scanf("%d", &nbClients);
		for (int j = 0; j < nbClients; j++)
		{
			scanf("%d %d", &indiceLivre, &dureLivre);
			if (arrayBook[indiceLivre] == 0)
			{
				printf("1\n");

				arrayBook[indiceLivre] +=  dureLivre;

			}
			else
			{
				printf("0\n");

			}


		}
		for (int q = 0; q < nbLivres; q++)
		{
			if (arrayBook[q] > 0)
				arrayBook[q] = arrayBook[q] - 1;
		}

	}
}
