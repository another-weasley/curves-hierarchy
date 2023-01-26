#ifndef HELIX_HPP
#define HELIX_HPP
#include "point3d.hpp"
#include "curve.hpp"

class Helix: public Curve
{
private:
    float m_radius;
    float m_step;
public:
    Helix(float radius, float step) : m_radius(radius), m_step(step){}
    virtual Point3D calc_at(float t);
    virtual Point3D calc_derivative_at(float t);
};

#endif // HELIX_HPP
