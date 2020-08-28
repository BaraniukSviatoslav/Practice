using namespace std;
#include <iostream>


int main()
{
	int A[3][3] = {
	{0,3,-1},
	{3,1,3},
	{8,4,-9}
	};
	int i, j;

    cout << "Matrix A = " << endl;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
             cout << A[i][j] << "\t";
        }
        cout << endl;
    }
    
    cout << "Elements of main dioganal" << endl;
    for (i = 0; i < 3; i++) {
        cout << A[i][i] << "\t";
    }
    cout << endl;

    cout << "Elements of another dioganal" << endl;
    for (j = 0; j < 3; j++) {
        cout << A[j][3 - j - 1] << "\t";

    }
    cout << endl;

    cout << "Multiplied elements of top main dioganal" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
        {
            if (j + i + 1 < 3)
                cout << A[i][j + i + 1] * 2 << "\t";
        }       
    }
    cout << endl;

    return 0;


}
