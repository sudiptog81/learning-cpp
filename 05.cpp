#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	// declare an alias for unsigned short int
	typedef unsigned short int ushort;

	// declare and initialise an unsigned int with values
	ushort width = 5, length = 10;

	// declare an unsigned short int and initialise with
	// product of two variables
	ushort area = width * length;

	cout << "Width: " << width << endl;
	cout << "Length: " << length << endl;
	cout << "Area: " << area << endl;

	_getch();
	return 0;
}
