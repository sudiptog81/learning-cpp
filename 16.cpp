/* ============================ 
 *      Progress Upto Day 3     
 * enum (done)
 * break (done)
 * class (done)
 * const (done)
 * #define (done)
 * #include (done)
 * continue (done)
 * variables (done)
 * functions (done)
 * sizeof(...) (done)
 * namespacing (done)
 * for(...) {...} (done)
 * while(...) {...} (done)
 * switch(...) {...} (done)
 * do {...} while(...) (done)
 * implementing classes (done)
 * if(...){...} else {...} (done)
 * 
 * Sudipto Ghosh (2019)
 * ============================ */

#include <iostream>
#include <conio.h>
#include "Rectangle.h"
using namespace std;

enum Choice
{
    DrawRectangle,
    GetArea,
    GetPerimeter,
    ChangeDimensions,
    Quit
};

int DoMenu()
{
    int _choice;
    cout << endl;
    cout << "\t    *** Menu *** " << endl;
    cout << "(1) Draw the rectangle"
         << "\t(2) Area" << endl;
    cout << "(3) Perimeter"
         << "\t\t(4) Resize" << endl;
    cout << "(5) Quit" << endl;
    cout << endl
         << "Enter Choice: ";
    cin >> _choice;
    cout << endl;
    _choice--;
    return _choice;
};

void DoDrawRectangle(Rectangle _rectangle)
{
    int width = _rectangle.getWidth();
    int height = _rectangle.getHeight();
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cout << "X";
        }
        cout << endl;
    }
};

void DoGetArea(Rectangle _rectangle)
{
    cout << "Area : " << _rectangle.getArea() << " sq. units." << endl;
};

void DoGetPerimeter(Rectangle _rectangle)
{
    cout << "Perimeter : " << _rectangle.getPerimeter() << " units." << endl;
};

int main()
{
    Rectangle awesomeRectangle(30, 5);

    int _choice = DrawRectangle;
    bool fQuit = false;

    cout << "     *** World of Rectangles ***" << endl;

    while (!fQuit)
    {
        _choice = DoMenu();

        if (_choice < DrawRectangle || _choice > Quit)
        {
            cout << endl
                 << "Invalid Choice, try again.";
            cout << endl
                 << endl;
            continue;
        }

        switch (_choice)
        {
        case DrawRectangle:
            DoDrawRectangle(awesomeRectangle);
            break;
        case GetArea:
            DoGetArea(awesomeRectangle);
            break;
        case GetPerimeter:
            DoGetPerimeter(awesomeRectangle);
            break;
        case ChangeDimensions:
            int newWidth, newHeight;
            cout << "New Width: ";
            cin >> newWidth;
            cout << "New Height: ";
            cin >> newHeight;
            awesomeRectangle.setSize(newWidth, newHeight);
            cout << endl;
            DoDrawRectangle(awesomeRectangle);
            break;
        case Quit:
            fQuit = true;
            cout << endl
                 << "Bye." << endl
                 << "Press any key to exit ..." << endl;
            break;
        default:
            cout << "Invalid Choice!" << endl;
            break;
        }
    }

    _getch();
    return 0;
}