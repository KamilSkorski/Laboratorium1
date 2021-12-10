#include <iostream>
using namespace std;
float liczbaA, liczbaB;
int main()
{
    cout << "Podaj piersza liczbe: ", cin >> liczbaA;
    cout << "Podaj druga liczbe: ",cin >> liczbaB;
    if (liczbaA > liczbaB)
        cout << "Liczba "<<liczbaA<<" jest wieksza";
    else  cout << "Liczba " << liczbaB << " jest wieksza";
}

