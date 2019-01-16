#include <iostream>
#include <conio.h>
using namespace std;

void demoFunc()
{
	cout << "This is a piece of code in demoFunc()\n";
}

int addFunc(int param1, int param2)
{
	cout << "First parameter to addFunc(): " << param1 << endl;
	cout << "Second parameter to addFunc(): " << param2 << endl;
	return param1 + param2;
}

int main()
{
	int num1, num2, result;
	cout << "This is a piece of code in main()\n";
	demoFunc();
	cout << "Returned to main()\n";
	cout << endl;
	cout << "Calling addFunc()\n";
	cout << "\tFirst number: ";
	cin >> num1;
	cout << "\tSecond number: ";
	cin >> num2;
	result = addFunc(num1, num2);
	cout << "\tValues returned: " << result << endl;
	cout << "Returned to main()\n";
	_getch();
	return 0;
}
