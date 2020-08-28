#include <conio.h>
#include <iostream>
using namespace std;

int Z[7][7], sumA, sumB;
int counter = 0;
double average;


int main()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            Z[i][j] = rand() % 100 - 50;
            std::cout << ("%i ", Z[i][j]) << "\t";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7 - i; j++)
        {
            if (Z[i][j] > 0)
            {
                sumA += Z[i][j];
                counter++;
            }

            if (Z[i][j] < 0)
            {
                sumB += Z[i][j];
            }

        }
    }

    average = (double)sumA / (double)counter;

    cout << endl << endl;
    cout << ("%d", average) << endl;

    cout << ("%i", sumA) << endl;
    cout << ("%i", sumB) << endl;

}