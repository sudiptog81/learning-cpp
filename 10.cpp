#include <iostream>
#include <conio.h>
#include <string>
#include "Cat.h"
using namespace std;

int main()
{
	Cat Frisky;
	Cat Tom(2, "Papa");

	cout << "Tom:" << endl << endl;
	Tom.meow();
	Tom.scratch();
	cout << Tom.getPrivateVar() << endl << endl;

	cout << "Frisky: " << endl << endl;
	Frisky.meow();

	_getch();
	return 0;
}

