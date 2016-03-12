// Page60_ConvertCTOR.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Distance.h"
#include <iostream>

using namespace std;

double calculateDrivingTime(const Distance& distance, double speed)
{
	return distance.inKilometers() / speed * 3600;
}

int main()
{
	cout << "wyswietl czas" << endl;
	double time = calculateDrivingTime(3.0, 2);
	cout << time << endl;

	/*
	Poniewa¿ funkcja calculateDrivingTime() oczekuje 
	jako parametr sta³ej referencji, a otrzymuje w 
	wywo³aniu wskaŸnik, nast¹pi utworzenie tymczasowego
	obiektu klasy Distance, poprzez wywo³anie dodanego 
	wczeœniej konstruktora przyjmuj¹cego jako parametr wskaŸnik.
	Oczywiœcie w powy¿szym przyk³adzie „jedynym” problemem jest narzut wydajnoœciowy
	wynikaj¹cy z utworzenia tymczasowego obiektu, ale w realnym projekcie skutki 
	mog¹ byæ o wiele bardziej powa¿ne.Jeœli funkcja przyjmowa³aby zwyk³¹(nie sta³¹) referencjê jako parametr, 
	a jej zamierzonym dzia³aniem by³oby zmienienie stanu przekazanego obiektu, funkcja ta nie 
	zmieni³aby w istocie jego, tylko obiekt tymczasowy.Po raz kolejny mamy do czynienia z b³êdem,
	*/

	Distance distance(11.0); 
	double driving_time = calculateDrivingTime(&distance, 25);
	cout << driving_time;

	system("Pause");
}



