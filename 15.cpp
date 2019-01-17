#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int i;

    cout << "How many hellos? ";
    cin >> i;

    do
    {
        cout << "Hello" << endl;
        i--;
    } while (i > 0);

    cout << endl;

    for (int i = 0, j = 0; i < 3; i++, j++)
    {
        cout << "i : " << i << "\tj : " << j << endl;
    }
    _getch();
    return 0;
}
