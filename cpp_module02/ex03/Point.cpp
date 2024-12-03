#include "Point.hpp"

    Point::Point():x(0), y(0){
        std::cout << "constructer Called !" << std::endl;
        }
    Point::Point(const float num1, const float num2) : x(num1) , y(num2){}


    
    Point& Point::operator=(const Point &other) 
    {
        return *this;
    }
    Point::Point(const Point& other): x(other.x), y(other.y){}
    Point::~Point()
    {
        std::cout << "destructer Called !" << std::endl;
    }

    int Point::getX() const
    {
        int ourX = this->x.getRawBits();
        return ourX;
    }
    int Point::getY() const
    {
        int ourY = this->y.getRawBits();
        return ourY;
    }

