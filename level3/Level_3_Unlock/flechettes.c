#include <stdio.h>
/**
 * main - task fleche
 * Return: Nothing
 */
int main(void)
{
	int n, min;

	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			min = i < j ? i : j;
			printf("%c", 96 + min);
		}
		for (int j = n - 1; j >= 1; j--)
		{
			min = i < j ? i : j;
			printf("%c", 96 + min);
		}
		printf("\n");

	}
	for (int i = n - 1; i >= 1; i--)
	{
		for (int j = 1; j <= n; j++)
		{
			min = i < j ? i : j;
			printf("%c", 96 + min);
		}
		for (int j = n - 1; j >= 1; j--)
		{
			min = i < j ? i : j;
			printf("%c", 96 + min);
		}
		printf("\n");

	}

}
