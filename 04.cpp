#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

void varTypes(string varType, int size)
{
	string varTypeBoilerplate = "Size of a " + varType + " is ";
	if (size != 1)
	{
		cout << varTypeBoilerplate << size << " bytes." << endl;
	}
	else
	{
		cout << varTypeBoilerplate << size << " byte." << endl;
	}
}

int main()
{
	cout << "Memory Size of Variable Types:" << endl
		 << endl;
	varTypes("int", sizeof(int));
	varTypes("short int", sizeof(short));
	varTypes("long int", sizeof(long));
	varTypes("char", sizeof(char));
	varTypes("float", sizeof(float));
	varTypes("double", sizeof(double));
	varTypes("bool", sizeof(bool));
	_getch();
	return 0;
}
