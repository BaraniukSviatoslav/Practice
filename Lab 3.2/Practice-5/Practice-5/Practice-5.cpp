    #include <conio.h>
#include <iostream>
using namespace std;

int main()
{
    int temp, tempI, tempJ, L[5][6];

    cout << "Input matrix L \n";

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 6; j++)
            cin >> L[i][j];

    cout << endl << "matrix L \n";

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
            cout << L[i][j] << "\t";
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        temp = L[i][0];
        tempI = i;
        tempJ = 0;
        for (int j = 0; j < 6; j++)
        {
            if (L[i][j] < temp)
            {
                temp = L[i][j];
                tempI = i;
                tempJ = j;
            }
        }
        temp = L[tempI][tempJ];
        L[tempI][tempJ] = L[i][5];
        L[i][5] = temp;

        cout << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << ("%i", L[i][j]) << "\t";
        }
        cout << endl;
    }
}
