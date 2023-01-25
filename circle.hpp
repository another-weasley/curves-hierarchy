#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "icurve.hpp"
#include "point3d.hpp"

class Circle: public Curve
{
private:
    float m_radius;
public:
    Circle(float radius) : m_radius(radius){}
    virtual Point3D calc_at(float t);
    virtual Point3D calc_derivative_at(float t);
    virtual float get_radius();
};

#endif // CIRCLE_HPP
