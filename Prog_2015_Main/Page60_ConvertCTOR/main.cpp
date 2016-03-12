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
	Poniewa� funkcja calculateDrivingTime() oczekuje 
	jako parametr sta�ej referencji, a otrzymuje w 
	wywo�aniu wska�nik, nast�pi utworzenie tymczasowego
	obiektu klasy Distance, poprzez wywo�anie dodanego 
	wcze�niej konstruktora przyjmuj�cego jako parametr wska�nik.
	Oczywi�cie w powy�szym przyk�adzie �jedynym� problemem jest narzut wydajno�ciowy
	wynikaj�cy z utworzenia tymczasowego obiektu, ale w realnym projekcie skutki 
	mog� by� o wiele bardziej powa�ne.Je�li funkcja przyjmowa�aby zwyk��(nie sta��) referencj� jako parametr, 
	a jej zamierzonym dzia�aniem by�oby zmienienie stanu przekazanego obiektu, funkcja ta nie 
	zmieni�aby w istocie jego, tylko obiekt tymczasowy.Po raz kolejny mamy do czynienia z b��dem,
	*/

	Distance distance(11.0); 
	double driving_time = calculateDrivingTime(&distance, 25);
	cout << driving_time;

	system("Pause");
}



