#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	// declare and initialise signed and unsigned
	// integers with maximum values
 	signed short int signedInt = 32767;
 	unsigned short int unsignedInt = 65535;
 	cout << "Signed: " << signedInt << endl;
 	cout << "Unsigned: " << unsignedInt << endl;

	// simulate running out of memory
 	signedInt++; unsignedInt++;
 	cout << "Signed: " << signedInt << endl;
 	cout << "Unsigned: " << unsignedInt << endl;

	_getch();
	return 0;
}
