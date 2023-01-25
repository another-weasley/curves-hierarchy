#include "circle.hpp"
#include <math.h>
Point3D Circle::calc_at(float t)
{
    float x, y, z;
    x = m_radius * cos(t);
    y = m_radius * sin(t);
    z = 0;
    return {x,y,z};
}

Point3D Circle::calc_derivative_at(float t)
{
    float x, y, z;
    x = -m_radius * sin(t);
    y = m_radius * cos(t);
    z = 0;
    return {x,y,z};
}

float Circle::get_radius()
{
    return m_radius;
}
