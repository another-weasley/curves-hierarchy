#include "point3d.hpp"
#include "helix.hpp"
#include <math.h>

Point3D Helix::calc_at(float t)
{
    float x, y, z;
    x = m_radius * cos(t);
    y = m_radius * sin(t);
    z = m_step * t;

    return {x, y, z};
}

Point3D Helix::calc_derivative_at(float t)
{
    float x, y, z;
    x = -m_radius * sin(t);
    y = m_radius * cos(t);
    z = m_step;

    return {x, y, z};
}
