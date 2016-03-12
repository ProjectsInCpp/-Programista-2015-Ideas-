// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using std::setw;
using namespace std;


int main()
{

		cout << "sizeof(bool) = " << sizeof(bool) << endl;
		cout << "sizeof(char) = " << sizeof(char) << endl;
		cout << "sizeof(unsigned char) = " << sizeof(unsigned char) << endl;
		cout << "sizeof(wchar_t) = " << sizeof(wchar_t) << endl;
		cout << "sizeof(short) = " << sizeof(short) << endl;
		cout << "sizeof(unsigned short) = " << sizeof(unsigned short) << endl << endl;
		cout << "sizeof(int) = " << sizeof(int) << endl;
		cout << "sizeof(long int) = " << sizeof(long int) << endl<< endl;
		cout << "sizeof(unsigned int) = " << sizeof(unsigned int) << endl;
		cout << "sizeof(long) = " << sizeof(long) << endl;
		cout << "sizeof(unsigned long) = " << sizeof(unsigned long) << endl;
		cout << "sizeof(long long) = " << sizeof(long long) << endl;
		cout << "sizeof(float) = " << sizeof(float) << endl;
		cout << "sizeof(double) = " << sizeof(double) << endl;
		cout << "sizeof(long double) = " << sizeof(long double) << endl;

	system("Pause");
    return 0;
}

