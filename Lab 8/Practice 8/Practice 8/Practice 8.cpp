#include <iostream>

using namespace std;

int perimetr(int, int);
int area(int, int);

int main()
{
	cout << "Perimetr: " << ("%i", perimetr(4, 5)) << endl;
	cout << "Area: " << ("%i", area(4, 5)) << endl;
	return 0;
}

int perimetr(int x, int y)
{
	return 2 * (x + y);
}

int area(int x, int y)
{
	return x * y;
}