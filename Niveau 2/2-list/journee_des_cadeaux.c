#include <stdio.h>
#include <stdlib.h>
int compareEntier(const void *pEntier1, const void *pEntier2)
{
	return (*(int *)(pEntier1) - *(int *)(pEntier2));
}
int main()
{

	int number, index;
	double midValue;
	scanf("%d", &number);

	int tabRiches[number];
	for (int i = 0; i < number; i++)
	{
		int value;
		scanf("%d", &value);
		tabRiches[i] = value;
	}
	qsort(tabRiches, number, sizeof(int), compareEntier);

	/*	for (int i = 0; i < number; i++)
		{
			printf("%d ", tabRiches[i]);
		}*/
	if (number % 2 == 0)
	{
		midValue = tabRiches[number / 2] + tabRiches[((number / 2) - 1)];
		midValue /= 2;
		printf("%.1f", midValue);
	}
	else
	{
		index = (number / 2);

		printf("%d", tabRiches[index]);
	}
}