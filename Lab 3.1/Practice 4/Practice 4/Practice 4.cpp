#include <conio.h>
#include <iostream>
using namespace std; 

int main()
{
	int i, j, N, M, F[20][20];
	int B = 9;
	int mult = 1;

	cout << "N="; 
	cin >> N;
	cout << "M="; 
	cin >> M;
	cout << "Input matrix F \n";
	
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> F[i][j]; 

	cout  << endl << "matrix F \n";

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			cout << F[i][j] << "\t"; 
		cout << endl; 
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (F[i][j] > 9) {
				mult *= F[i][j];
			}
		}

	}

	cout << endl << ("%i", mult) << " multiplie" << endl; 

	system("pause");
	return 0;
}