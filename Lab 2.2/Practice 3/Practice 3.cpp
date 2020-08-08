#include <iostream>
#include <conio.h>

int main()
{
	int D[12] = { 3, 1, -6, -5, 4, 2, 8, -10, -7, -8, -2, 9 };
	int numbs = 0;
	int counter = 0;
	int temp = 0;

	for (int i = 0; i < 12; i++)
	{ 
		if (D[i] < 0) {
			numbs += 1;
		}
	}
	int *Z = new int[numbs];
	for (int i = 0; i < 12; i++)
	{
		if (D[i] < 0) {
			Z[counter] = D[i];
			counter++;
		}
	}
	for (int i = 0; i < numbs - 1; i++)
	{
		for (int g = 0; g < numbs - i - 1; g++)
		{
			if (Z[g] > Z[g + 1]) {
				temp = Z[g];
				Z[g] = Z[g + 1];
				Z[g + 1] = temp;
			}
		}
	}
	for (int i = 0; i < numbs; i++)
	{
		printf("%i\n", Z[i]);
	}
}

