#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	// enumerated constant
	enum Color
	{
		black,
		grey,
		red,
		green,
		blue
	};
	Color bgcolor, fgcolor;

	// using constants
	bgcolor = Color::black;
	fgcolor = Color::red;

	cout << "body {" << endl
		 << "\t"
		 << "background-color: #" << bgcolor << ";" << endl
		 << "\t"
		 << "color: #" << fgcolor << ";" << endl
		 << "}" << endl;

	_getch();
	return 0;
}
