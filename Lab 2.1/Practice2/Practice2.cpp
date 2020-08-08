#include <iostream>
#include <conio.h>

int main()
{
	int T[9] = { 7, 4, -1, 3, -6, 2, -9, 1, 8 };
	float average = 0.f;
	int count = 0;
	int suma = 0;

	for (int i = 0; i < 9; i++)
	{
		if (T[i] >= 0) {
			continue;
		}
		else {
			suma += i;
			count++;
		}
	}
	average = (float)suma / (float)count;

	printf("%f", average);
	_getch();
	return 0;
}

