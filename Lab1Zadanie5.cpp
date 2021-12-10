
#include <iostream>
using namespace std;
int main()
{
	int dzialanie;
	float a, b;
	cout << "Podaj liczbe a: ", cin >> a;
	cout << "Podaj liczbe b: ", cin >> b;
	cout << "Podaj nr operacji arytmetycznej:\n";
	cout << "1. Suma.\n";
	cout << "2. Roznica.\n";
	cout << "3. Iloczyn.\n";
	cout << "4. Iloraz.\n";
	cout << "Twoj wybor: ", cin >> dzialanie;
	switch(dzialanie)
	{
	case 1:
		cout << "Suma "<<a<<" + "<<b<< " = " << a + b<<endl;
		break;
	case 2:
		cout << "Roznica " << a << " - " << b << " = " << a - b << endl;
		break;
	case 3:
		cout << "Iloczyn " << a << " * " << b << " = " << a * b << endl;
		break;
	case 4:
		if (b != 0)
			cout << "Iloraz " << a << " / " << b << " = " << a / b << endl;
		else cout<< "Nie mozna dzielic przez 0";
		break;
	default:
		cout << "Nieistniejaca operacja";
	}
		 
}

