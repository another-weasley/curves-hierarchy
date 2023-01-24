#ifndef POINT3D_HPP
#define POINT3D_HPP
#include <iostream>
class Point3D
{
private:
    float m_x;
    float m_y;
    float m_z;
public:
    Point3D(float x, float y, float z) : m_x(x), m_y(y), m_z(z){}
    friend std::ostream& operator<< (std::ostream &out, const Point3D &point);
};

#endif // POINT3D_HPP
