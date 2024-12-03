#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {
    
    Point const a;
    Point const b(5,0);
    Point const c(0, 5);
    // Point const p(6,6); // outside the triangle
    Point const p(1,1); // inside the triangle
    // Point const p(2,0); // in the edge of the triangle
    // Point const p(0,0); // point on a Vertex of the triangle


    std::cout << bsp(a,b,c,p) << std::endl;
    return 0;
}