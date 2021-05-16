#include <iostream>
#include "rectangle.h"
#include "para.h"
#include "square.h"

using namespace std;

int main()
{
    Rectangle r;
    Rectangle r1(20, 20);
    Para p(30, 30, 30);
    Square s(40);
    cout << "The area of the rectangle is : " << r1.getArea() << endl; // The area of the rectangle is : 400
    cout << "The volume of our shape is : " << p.getVolume() << endl; // The volume of our shape is : 27000
    cout << "The area of your square is : " << s.getArea() << endl;

    return 0;
}
