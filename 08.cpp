#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    enum Day
    {
	    Sunday,
	    Monday,
	    Tuesday,
	    Wednesday,
	    Thursday,
	    Friday,
	    Saturday
    };
    
    Day today;

    today = Sunday;

    if (today == 0 || today == 6)
    {
	    cout << "Weekend!" << endl;
    }
    else
    {
	    cout << "Boring!" << endl;
    }

    const float PI = 3.14159;
    float piVar = PI;
    cout << "Pi: " << piVar << endl;

    _getch();
    return 0;
}

