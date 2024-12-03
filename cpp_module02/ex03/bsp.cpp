#include "Point.hpp"


float get_area(Point const head, Point const b, Point const c)
{
    int x1 = head.getX();
    int y1 = head.getY();

    int x2 = b.getX();
    int y2 = b.getY();

    int x3 = c.getX();
    int y3 = c.getY();

    return (0.5f * abs((x1 * (y2 -y3)) + (x2 * (y3 - y1)) + (x3 * (y1 - y2))));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{

    float area_abc = get_area(a,b,c);
    float sub_area_one = get_area(point,b,c); // PBC triangle
    float sub_area_two = get_area(point,c,a); // PCA triangle
    float sub_area_three = get_area(point,a,b); // PAB triangle
    float sum = sub_area_one + sub_area_two + sub_area_three;
    if (area_abc != sum)
        return false;
    if (!sub_area_one || !sub_area_two || !sub_area_three)
        return false;
    return true;

}