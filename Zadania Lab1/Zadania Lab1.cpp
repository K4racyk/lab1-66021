#include <iostream>
using namespace std;
//zadania lab1 Kozioł Dominik 66021





int main()
{
    //-------------------zadanie 1 -------------------
    /*
    string nrAlbumu = "66021";
    cout << "Moj numer albumu studenta to: "  << nrAlbumu << endl;
    */

	//-------------------zadanie 2 -------------------
	/*
	int  a;

	cout << "Wpisz dowolna liczbe: ", cin >> a; 
	
	if (a % 2 == 0) 					
	{
		cout << "Podana liczba jest parzysta\n";
	}
	else 							
	{
		cout << "Podana liczba jest nieparzysta \n";
	}
	*/
	//-------------------zadanie 3 -------------------
	/*
	float b, c;

	cout << "Wpisz liczbe numer 1" << endl;
	cin >> b;
	cout << "Wpisz liczbe numer 2" << endl;
	cin >> c;
	if (b > c)
	{
		cout << "Liczba " << b << " jest wieksza od " << c << endl;
	}
	else if (c > b)
	{
		cout << "Liczba " << c << " jest wieksza od " << b << endl;
	}
	else
	{
		cout << "Liczby sa rowne "<< endl;
	}
	*/
	//-------------------zadanie 4 -------------------
	/*
	float a, b, c, d, srednia;

	cout << "Wprowadz cztery liczby\n ", cin >> a >> b >> c >> d;

	srednia = (a + b + c + d) / 4;
	cout << "Srednia: " << srednia << endl;
	*/
	//-------------------zadanie 5 -------------------
	int wybor;
	float a, b;
	cout << "Podaj a: ", cin >> a;
	cout << "Podaj b: ", cin >> b;
	cout << "Dostepne operacje matematyczne: \n1.Suma \n2.Roznica \n3.Iloczyn\n4.Iloraz\nTwoj wybor: ";
	cin >> wybor;
	switch (wybor)
	{
	case 1:
		cout << "Suma " << a << " + " << b << " = " << a + b << endl;
		break;
	case 2:
		cout << "Roznica " << a << " - " << b << " = " << a - b << endl;
		break;
	case 3:
		cout << "Iloczyn " << a << " * " << b << " = " << a * b << endl;
		break;
	case 4:
		if (b != 0)
		{
			cout << "Iloraz " << a << " / " << b << " = " << a / b << endl;
		}
		else
		{
			cout << "Nie wolno dzielic przez 0 " << endl;
		}
		break;

		default:
		cout << "Wybrano nieistniejace operacje" << endl;
		break;
	}



}

