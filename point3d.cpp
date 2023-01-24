#include "point3d.hpp"

std::ostream& operator<< (std::ostream &out, const Point3D &point)
{
    out << "(" << point.m_x << ", " << point.m_y << ", " << point.m_z << ")";
    return out;
}
