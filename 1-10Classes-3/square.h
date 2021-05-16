#ifndef SQUARE_H
#define SQUARE_H
#include "rectangle.h"

//Square class
class Square: public Rectangle {
public:
    Square(int side): Rectangle(side, side) {
    }
};

#endif // SQUARE_H
