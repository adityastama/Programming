#include <iostream>
using namespace std;

int main()
{
	int x, y;

	cout << "\nMENCARI KUADRAN SUATU KOORDINAT" << endl;
	cout << "===============================\n" << endl;

	cout << "masukan nilai x = ";
	cin >> x;

	cout << "masukan nilai y = ";
	cin >> y;

	cout << "\nkoordinat titik (x,y) = " << x << "   " << endl;

	if ( x > 0 && y > 0 )
	{
		cout << "\nkuadran 1" << endl;
	}
	else if ( x < 0 && y < 0 )
	{
		cout << "\nkuadran 2" << endl;
	}
	else if ( x < 0 && y > 0 )
	{
		cout << "\nkuadran 3" << endl;
	}
	else
	{
		cout << "\nkuadran 4" << endl;
	}

	return 0;
}
