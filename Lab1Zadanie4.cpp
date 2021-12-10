#include <iostream>
using namespace std;
float a, b, c, d, srednia;
int main()
{
    cout << "Podaj liczbe nr 1: ", cin >> a;
    cout << "Podaj liczbe nr 2: ", cin >> b;
    cout << "Podaj liczbe nr 3: ", cin >> c;
    cout << "Podaj liczbe nr 4: ", cin >> d;
    srednia = (a + b + c + d) / 4;
    cout << "Srednia podanych liczb: " << srednia;
}


