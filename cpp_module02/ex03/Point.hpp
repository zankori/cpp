#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <cmath>

class Point{
    private :
    const Fixed x;
    const Fixed y;
    public :
    //  Orthodox Canonical Form //
    Point();
    Point(const Point& other);
    Point& operator=(const Point &other);
    ~Point();
    // -- //
    Point(const float num1, const float num2);
    int getX()const;
    int getY()const;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif