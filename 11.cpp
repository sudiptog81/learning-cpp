#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	for (int i = 0; i < 3; i++)
	{
		cout << i << " ";

		switch (i)
		{
			case 0:
				cout << "Zero" << endl;
				break;
			case 1:
				cout << "One" << endl;
				break;
			case 2:
				cout << "Two" << endl;
				break;
			default:
				break;
		};
	};
}

