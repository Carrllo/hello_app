#include <iostream>

using namespace std;

int dodawanie()
{

	setlocale(LC_ALL, ");

	float a,b,c;

	cout <<"Liczenie sumy dwóch liczb" << endl;

	cout << "Podaj liczbę A: ";
		cin >> a;

	cout << endl << "Podaj liczbę B: ";
		cin >> b;

	c = a+b;
	cout << endl <<  "Suma A(" << a << ") i B(" << b << ") wynosi: " << c; 
}
