#include "point3d.hpp"
#include "ellipse.hpp"
#include <math.h>

Point3D Ellipse::calc_at(float t)
{
    float x, y, z;
    x = m_xradius * cos(t);
    y = m_yradius * sin(t);
    z = 0;
    return {x, y, z};
}

Point3D Ellipse::calc_derivative_at(float t)
{
    float x, y, z;
    x = - m_xradius * sin(t);
    y = m_yradius * cos(t);
    z = 0;
    return {x, y, z};
}
